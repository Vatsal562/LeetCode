class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        vector<int> ans;
        stack<int> s;
        
        for(int i=nums2.size()-1;i>=0;i--){
            while(s.empty()==false and s.top()<nums2[i]){
                s.pop();
            }
            if(s.empty()==true){
                v.push_back(-1);
                s.push(nums2[i]);
            }else{
                v.push_back(s.top());
                s.push(nums2[i]);
            }
        }
        
        reverse(v.begin(),v.end());
        
        for(auto x:nums1){
            int i = find(nums2.begin(),nums2.end(),x) - nums2.begin();
            //int index = i - nums2.begin();
            //cout<<j<<" ";
            ans.push_back(v[i]);
        }
        return ans;
    }
};
