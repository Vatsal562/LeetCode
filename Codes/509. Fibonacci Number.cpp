class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;

        int temp1 = 0;
        int temp2 = 1;
        int sum=0;
        for(int i=1;i<n;i++){
            sum = temp1+temp2;
            int temp = temp2;
            temp2=sum;
            temp1=temp;
        }
        return sum;
    }
};
