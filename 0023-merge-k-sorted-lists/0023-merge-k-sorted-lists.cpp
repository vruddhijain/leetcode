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
    struct CompareNode {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; 
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, CompareNode> pq;

        // Push the head of each list into the priority queue
        for (ListNode* list : lists) {
            if (list) { // Ensure the list is not null
                pq.push(list);
            }
        }

        ListNode* dummy = new ListNode(0); // Dummy head for the result
        ListNode* temp = dummy; // Pointer to build the new list

        // While there are nodes in the priority queue
        while (!pq.empty()) {
            ListNode* node = pq.top(); // Get the smallest node
            pq.pop(); // Remove it from the queue
            
            temp->next = node; // Add it to the result
            temp = temp->next; // Move the pointer forward
            
            // If there is a next node, push it into the priority queue
            if (node->next) {
                pq.push(node->next);
            }
        }

        return dummy->next; // Return the merged list, skipping the dummy head
    }
};