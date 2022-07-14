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
    int pairSum(ListNode* head) {
        vector<int> v;
        int ans = 0;
        
        for(ListNode *curr = head; curr!=NULL; curr=curr->next){
            v.push_back(curr->val);
        }
        
        for(int i=0;i<v.size();i++){
            int sum = v[i]+v[v.size()-i-1];
            ans = max(ans,sum);
        }
        
        return ans;
    }
};
