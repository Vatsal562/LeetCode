class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int a = 0;
        int sum = 0;
        
        for(auto x:nums){
            sum+=x;
            a = min(a,sum);
        }
        
        int b = abs(a)+1;
        return b;
    }
};
