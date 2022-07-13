class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums.size();
        int m = nums[a-1];
        int n = nums[a-2];
        return ((m-1)*(n-1));
    }
};
