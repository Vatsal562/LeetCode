class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s,s2;
        vector<int> v;
        
        for(auto x:nums1)
            s.insert(x);
        
        for(auto x:nums2){
            if(s.find(x)!=s.end()) s2.insert(x);
        }
        
        for(auto x:nums3){
            if(s.find(x)!=s.end()) s2.insert(x);
        }
        
        s.clear();
        
        for(auto x:nums2)
            s.insert(x);
        
        for(auto x:nums3){
            if(s.find(x)!=s.end()) s2.insert(x);
        }
        
        for(auto x:s2)
            v.push_back(x);
        
        return v;
    }
};
