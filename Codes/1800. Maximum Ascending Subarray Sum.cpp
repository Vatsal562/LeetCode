class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int j = 1;
        int sum = nums[0];
        int n = nums.size();
        int ans = 0;
        
        while(j<n){
            if(nums[j]>nums[j-1]){
                sum+=nums[j];
                j++;
            }
            else if(nums[j]<=nums[j-1]){
                ans = max(ans,sum);
                sum = nums[j];
                j++;
            }
        }
        ans = max(ans,sum);
        return ans;
    }
};
