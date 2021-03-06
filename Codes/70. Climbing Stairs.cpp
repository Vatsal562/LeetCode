class Solution {
public:
    int climbStairs(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        
        int ans = 0;
        int a = 1;
        int b = 2;
        for(int i=2;i<n;i++){
            ans = a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};
