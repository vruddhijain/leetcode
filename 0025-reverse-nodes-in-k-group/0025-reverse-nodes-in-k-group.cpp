/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
       ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1)
            return head;

        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }

        int numGroups = count / k;
        if (numGroups == 0)
            return head; // Not enough elements to reverse k groups

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupEnd = dummy;
        ListNode* currGroupStart = head;

        for (int i = 0; i < numGroups; i++) {
            for (int j = 1; j < k; j++) {
                ListNode* nextNode = currGroupStart->next;
                currGroupStart->next = nextNode->next;
                nextNode->next = prevGroupEnd->next;
                prevGroupEnd->next = nextNode;
            }
            prevGroupEnd = currGroupStart;
            currGroupStart = currGroupStart->next;
        }

        head = dummy->next;
        delete dummy;

        return head;
    }
};