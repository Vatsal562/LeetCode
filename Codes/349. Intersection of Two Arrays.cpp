class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        vector<int> v;
        
        for(auto x:nums1)
            s.insert(x);
        
        for(auto x:nums2){
            if(s.find(x)!=s.end()){
                v.push_back(x);
                s.erase(x);
            }
        }
        return v;
    }
};
