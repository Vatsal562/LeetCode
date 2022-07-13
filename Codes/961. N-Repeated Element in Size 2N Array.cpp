class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) count++;
            else count=1;
            
            if(count==(nums.size()/2)) return nums[i];
        }
        return -1;
    }
};
