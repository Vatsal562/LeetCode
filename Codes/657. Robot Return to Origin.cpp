class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0,down=0,left=0,right=0;
       for(auto x:moves){
           if(x=='U')
               up++;
           else if(x=='D')
               down++;
           else if(x=='L')
               left++;
           else
               right++;
       }
        if(up==down && left==right)
            return true;
        else 
            return false;
    }
};
