class Solution {
public:
    int reverse(int x) {
//         int rev=0;
//         if(x<0)
//         {
//             x=-1*x;
//             while(x>0)
//             {
//                 int temp=x%10;
//                 x=x/10;
//                 if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && temp > 7)) return 0;
//                 if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && temp < -8)) return 0;
//                 rev=rev*10+temp;
                
//             }
//             rev=-1*rev;
//         }
//         else{
//              while(x>0)
//             {
//                  int temp=x%10;
//                  x=x/10;
//                  if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && temp > 7)) return 0;
//                  if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && temp < -8)) return 0;
//                  rev=rev*10+temp;
                
//             }
//         }
//         return rev;
        
         int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
