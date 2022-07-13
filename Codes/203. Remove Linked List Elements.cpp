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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        if(head->next==NULL and head->val==val) return NULL;
        if(head->next==NULL and head->val!=val) return head;
        
        while(head!=NULL and head->val==val){
            ListNode *temp = head;
            head=head->next;
            delete(temp);
        }
        
        ListNode *curr=head;
        while(curr!=NULL and curr->next!=NULL){
            if(curr->next->val==val){
                ListNode *temp = curr->next;
                curr->next = temp->next;
                delete(temp);
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};
