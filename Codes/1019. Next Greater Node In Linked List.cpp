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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        vector<int> ans;
        stack<int> s;
        
        for(ListNode *curr=head; curr!=NULL; curr=curr->next){
            v.push_back(curr->val);
        }
        
        for(int i=v.size()-1;i>=0;i--){
            if(s.empty()==true){
                s.push(v[i]);
                ans.push_back(0);
            }else{
                if(s.top()>v[i]){
                    ans.push_back(s.top());
                    s.push(v[i]);
                }else{
                    while(s.empty()==false and s.top()<=v[i]){
                        s.pop();
                    }
                    i++;
                    continue;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};
