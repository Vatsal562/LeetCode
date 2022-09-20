class Solution {
public:
    int countSet(vector<int>& nums,int set){
        int n = nums.size();
        int t[n+1][set+1];
        
        for(int i=0;i<n+1;i++) t[i][0] = 1;
        for(int i=1;i<set+1;i++) t[0][i] = 0;
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<set+1;j++){
                if(nums[i-1]<=j) t[i][j] = (t[i-1][j] + t[i-1][j-nums[i-1]]);
                else t[i][j] = (t[i-1][j]);
            }
        }
        
        return (t[n][set]);
    }
        
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int set;
        target=abs(target);
        
        for(auto x:nums) sum+=x;
        
        if(sum<target || (sum+target)%2!=0) return 0;
        
        set = (target+sum)/2;
        return countSet(nums,set);
    }
    
};
