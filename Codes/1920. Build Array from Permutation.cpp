class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(auto a:nums){
            ans.push_back(nums[a]);
        }
        return ans;
    }
};
