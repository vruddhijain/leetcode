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
    // Comparator to use for the min-heap (priority queue)
    struct CompareNode {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; // Min-heap based on node values
        }
    };

    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        // Priority queue to store the ListNode pointers
        std::priority_queue<ListNode*, std::vector<ListNode*>, CompareNode> pq;

        // Push every node from each linked list into the priority queue
        for (ListNode* list : lists) {
            while (list) {
                pq.push(list); // Push each node into the min-heap
                list = list->next; // Move to the next node
            }
        }

        ListNode* dummy = new ListNode(0); // Dummy head for the result
        ListNode* temp = dummy; // Pointer to build the new list

        // Pop nodes from the priority queue and build the new linked list
        while (!pq.empty()) {
            ListNode* node = pq.top(); // Get the smallest node
            pq.pop(); // Remove it from the queue
            
            temp->next = node; // Add it to the result list
            temp = temp->next; // Move the pointer forward
            temp->next = nullptr; // Ensure the next pointer is set to nullptr
        }

        return dummy->next; // Return the merged list, skipping the dummy head
    }
};