class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int a = nums.size();
        
        for(auto x:nums)
            cout<<x<<" ";
        
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        
        
        return ans;
    }
};
