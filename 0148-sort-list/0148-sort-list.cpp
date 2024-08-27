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
    ListNode* sortList(ListNode* head) {
        
       vector<int> res;
        ListNode* x = head;
        
        while(x != nullptr) {
            res.push_back(x->val);
            x = x->next;
        }
        
        // Step 2: Sort the vector
        sort(res.begin(), res.end());
        
        // Step 3: Reconstruct the linked list with sorted values
        ListNode* dummy = new ListNode(0); 
        ListNode* current = dummy;
        
        for(int i = 0; i < res.size(); i++) {
            current->next = new ListNode(res[i]);
            current = current->next;
        }
        
        
        return dummy->next;

    }
};