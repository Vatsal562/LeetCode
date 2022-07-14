class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int a = nums[i-1]-nums[i]+1;
                nums[i] = nums[i]+a;
                count+=a;
            }
        }
        return count;
    }
};
