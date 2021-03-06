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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode *head = NULL, *tail = NULL;
        ListNode *a = l1;
        ListNode *b = l2;
        
        if(a->val<=b->val){
            head=tail=a;
            a=a->next;
        }else{
            head=tail=b;
            b=b->next;
        }
        
        while(a!=NULL and b!=NULL){
            if(a->val<=b->val){
                tail->next = a;
                tail = tail->next;
                a = a->next;
            }else{
                tail->next = b;
                tail = tail->next;
                b = b->next;
            }
        }
        
        if(a==NULL){
            while(b!=NULL){
                tail->next = b;
                tail = tail->next;
                b = b->next;
            }
        }
        if(b==NULL){
            while(a!=NULL){
                tail->next = a;
                tail = tail->next;
                a = a->next;
            }
        }
        
        return head;
    }
};
