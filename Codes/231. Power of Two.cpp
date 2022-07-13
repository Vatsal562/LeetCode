class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 or n<0) return false;
        
        while(n>0){
            if(n%2==0 or n==1){
                n=n/2;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
