class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> ans;
        
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        
        while(i<j){
            int a = nums[i]+nums[j];
            ans.push_back(a);
            i++;
            j--;
        }
        
        // int temp = ans[0];
        // for(int i=1;i<ans.size();i++){
        //     if(ans[i]>temp) temp=ans[i];
        // }
        // return temp;
        
        auto res = *max_element(ans.begin(),ans.end());
        return res;
    }
};
