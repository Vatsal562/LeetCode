class Solution {
public:
    vector<int> countBits(int n) {
        int count = 0;
        vector<int> ans = {0};
        for(int i=1;i<=n;i++){
            int j = i;
            while(j>0){
                if((j & 1)==1) count++;
                j = j >> 1;
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};
