class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int k = 2;
        int i = 0;
        int j = 0;
        int n = nums.size();
        int sum = 0;
        vector<int> v;
        unordered_map<int,int> m;
        
        while(j<n){
            sum+=nums[j];
            
            if(j-i+1<k) j++;
            
            else if(j-i+1==k){
                v.push_back(sum);
                
                sum = sum - nums[i];
                i++;
                j++;
            }
        }
        
        for(auto x:v) m[x]++;
        for(auto x:m){
            if(x.second>=2) return true;
        }
        
        return false;
    }
};
