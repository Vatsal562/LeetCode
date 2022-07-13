class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(auto a : nums){
            int count = 0;
            while(a!=0){
                count++;
                a=a/10;
            }
            if(count%2==0) res++;
        }
        return res;
    }
};
