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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        
        for(ListNode *curr = l1; curr!=NULL; curr=curr->next){
            v1.push_back(curr->val);
        }
        
        for(ListNode *curr = l2; curr!=NULL; curr=curr->next){
            v2.push_back(curr->val);
        }
        
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        
        int carry = 0;
        int i;
        for(i=0;i<v1.size() and i<v2.size();i++){
            int sum = v1[i]+v2[i]+carry;
            carry=0;
            if(sum<10) v3.push_back(sum);
            else{
                v3.push_back(sum%10);
                carry++;
            }
        }
        
        if(i==v2.size()){
            while(i<v1.size()){
                int sum = v1[i]+carry;
                carry=0;
                if(sum<10) v3.push_back(sum);
                else{
                     v3.push_back(sum%10);
                    carry++;
                }
                i++;
            }
        }
        
        if(i==v1.size()){
            while(i<v2.size()){
                int sum = v2[i]+carry;
                carry=0;
                if(sum<10) v3.push_back(sum);
                else{
                     v3.push_back(sum%10);
                    carry++;
                }
                i++;
            }
        }
        
        if(carry!=0) v3.push_back(carry);
        
        reverse(v3.begin(),v3.end());
        for(auto x:v3) cout<<x<<" ";
        
        ListNode *start=new ListNode(v3[0]);
        ListNode *end=start;
        for(int j=1;j<v3.size();j++){
            end->next = new ListNode(v3[j]);
            end = end->next;
        }
        
        return start;
    }
};
