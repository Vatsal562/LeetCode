class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        
        for(auto x:nums){
            int b = x*x;
            v.push_back(b);
        }
        
        sort(v.begin(),v.end());
        return v;
    }
};
