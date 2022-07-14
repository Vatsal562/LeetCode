class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = nums[0];
        int l = nums[nums.size()-1];
        int gcd=0;
        for(int i=1;i<=s;i++){
            if(s%i==0 && l%i==0)
                gcd=i;
        }
        return gcd;
    }
};
