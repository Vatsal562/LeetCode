class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             if(i%2==1 and nums[i]<0) continue;
//             if(i%2==1 and nums[i]>0){
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j]<0){
//                         int temp = nums[j];
//                         nums.erase(nums.begin()+j);
//                         nums.insert(nums.begin()+i, temp);
//                         break;
//                     }
//                 }
//             }
            
//             if(i%2==0 and nums[i]>0) continue;
//             if(i%2==0 and nums[i]<0){
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j]>0){
//                         int temp = nums[j];
//                         nums.erase(nums.begin()+j);
//                         nums.insert(nums.begin()+i, temp);
//                         break;
//                     }
//                 }
//             }
//         }
//         return nums;
        
        int n = nums.size();
        vector<int> ans(n,0);
        int i=0;
        int j=1;
        for(auto x:nums){
            if(x>0){
                ans[i]=x;
                i+=2;
            }
            if(x<0){
                ans[j]=x;
                j+=2;
            }
        }
        return ans;
    }
};
