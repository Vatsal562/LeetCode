class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        if(num<0)
            return false;
        else{
            for(int i=1;i<=num/2;i++){
                if(num%i==0)
                    sum+=i;
            }
            if(num==sum)
                return true;
        }
        return false;
    }
};
