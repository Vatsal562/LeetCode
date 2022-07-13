class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size()-1;
//         label:
//         if(digits[n]<9)
//             digits[n]+=1;
//         else{
//             digits[n]=0;
//             n--;
//             if(n<0){digits.insert(digits.begin(),1);}
//             else goto label;
            
//         }
//         return digits;
        
        int n = digits.size()-1;
        while(n>=0){
            if(digits[n]<9){
                digits[n]+=1;
                break;
            }
            else{
                digits[n]=0;
                n--;
                if(n<0){digits.insert(digits.begin(),1);}
            }
        }
        return digits;
        
        
    }
};
