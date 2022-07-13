class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a = index[i];
            int b = nums[i];
            ans.insert(ans.begin()+a,b);
        }
        return ans;
    }
};
