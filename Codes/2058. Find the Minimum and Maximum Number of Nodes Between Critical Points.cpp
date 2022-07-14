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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        vector<int> v2;
        vector<int> v3;
        
        for(ListNode *curr=head; curr!=NULL; curr=curr->next){
            v.push_back(curr->val);
        }
        
        for(int i=1;i<v.size()-1;i++){
            if((v[i]<v[i-1] and v[i]<v[i+1]) or (v[i]>v[i-1] and v[i]>v[i+1])){
                v2.push_back(i+1);
            }
        }
        
        if(v2.size()==0 or v2.size()==1) return {-1,-1};
        
        int mi = INT_MAX;
        for(int i=1;i<v2.size();i++){
            int a = v2[i]-v2[i-1];
            mi = min(mi,a);
        }
        v3.push_back(mi);
        v3.push_back(v2[v2.size()-1]-v2[0]);
        
        return v3;
    }
};
