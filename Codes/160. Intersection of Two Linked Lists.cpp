/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        int count = 0;
        ListNode *curr = head;
        while(curr!=NULL){
            count++;
            curr = curr->next;
        }
        cout<<count<<" ";
        return count;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = length(headA);
        int b = length(headB);
        int d = 0;
        
        if(a<=b){
            d=b-a;
            for(int i=0;i<d;i++){
                headB = headB->next;
            }
            while(headA!=NULL and headB!=NULL){
                if(headA==headB) return headA;
                headA = headA->next;
                headB = headB->next;
            }
        } 
        
        if(b<a){
            d=a-b;
            for(int i=0;i<d;i++){
                headA = headA->next;
            }
            while(headA!=NULL and headB!=NULL){
                if(headA==headB) return headA;
                headA = headA->next;
                headB = headB->next;
            }
        }
        return 0;
    }
};
