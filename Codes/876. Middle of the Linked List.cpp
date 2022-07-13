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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode *temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        // cout<<count;
        ListNode *res = head;
        for(int i=1;i<=count/2;i++){
            res = res->next;
        }
        return res;
    }
};
