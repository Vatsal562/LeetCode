class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int i=0;
        for(i;nums[i]<=target;i++){
            if(nums[i]==target)
                return i;
            if(i==nums.size()-1) return i+1;
        }
        ans=i;
        return ans;
    }
};
