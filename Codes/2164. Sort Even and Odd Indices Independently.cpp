class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> v1,v2;
        
        for(int i=0;i<nums.size();i+=2){
            v1.push_back(nums[i]);
        }
        
        for(int i=1;i<nums.size();i+=2){
            v2.push_back(nums[i]);
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
        
        for(int i=0;i<v1.size();i++){
            nums[2*i] = v1[i];
        }
        
        for(int i=0;i<v2.size();i++){
            nums[2*i+1] = v2[i];
        }
        
        return nums;
    }
};
