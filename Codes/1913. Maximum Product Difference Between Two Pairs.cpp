class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=0,max2=0,min1=INT_MAX,min2=INT_MAX;
        //finding greatest numbers
        for(auto a: nums){
            if(a>=max1){
                max2=max1;
                max1=a;
            }else{
                if(a>max2){
                    max2=a;
                }
            }
        }
        //finding min numbers
        for(auto a: nums){
            if(a<=min1){
                min2=min1;
                min1=a;
            }else{
                if(a<min2){
                    min2=a;
                }
            }
        }
        return ((max1*max2)-(min1*min2));
    }
};
