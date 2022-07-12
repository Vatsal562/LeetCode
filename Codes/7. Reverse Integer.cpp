class Solution {
public:
    int reverse(int x) {
        long int rev=0;
            while(x!=0)
            {
                int temp=x%10;
                x=x/10;
                if(rev*10 > INT_MAX || rev*10 < INT_MIN) return 0;
                rev=rev*10+temp;
                
            }
        return rev;
        
    }
};
