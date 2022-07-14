class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> m;
        int ans = 0;
        
        for(int i=lowLimit;i<=highLimit;i++){
            int count = 0;
            int j = i;
            
            while(j!=0){
                count+=j%10;
                j=j/10;
            }
            
            m[count]++;
        }
        
        for(auto x:m) 
            ans = max(ans,x.second);
        
        return ans;
    }
};
