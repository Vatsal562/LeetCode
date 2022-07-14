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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *start=head, *end=head, *curr=head;
        
        for(int i=0;i<k;i++){
            end = end->next;
        }
        
        while(end!=NULL){
            start = start->next;
            end = end->next;
        }
        
        for(int i=0;i<k-1;i++){
            curr=curr->next;
        }
        
        int a = curr->val;
        curr->val = start->val;
        start->val = a;
        
        return head;
    }
};
