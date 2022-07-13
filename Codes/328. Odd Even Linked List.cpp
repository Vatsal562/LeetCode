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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        
        ListNode *es = NULL, *ee = NULL, *os = NULL, *oe = NULL;
        
        ListNode *curr = head;
        int i=1;
        
        while(curr!=NULL){
            if(i%2==0){
                if(es==NULL){
                    es=curr;
                    ee=es;
                    curr=curr->next;
                    i++;
                }else{
                    ee->next = curr;
                    ee = ee->next;
                    curr = curr->next;
                    i++;
                }
            }else{
                if(os==NULL){
                    os=curr;
                    oe=os;
                    curr=curr->next;
                    i++;
                }else{
                    oe->next = curr;
                    oe = oe->next;
                    curr = curr->next;
                    i++;
                }
            }
        }
        oe->next=es;
        ee->next = NULL;
        return os;
        
    }
};
