class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int a = 1;
        int b = -1;
        if(n%2==0){
            for(int i=0;i<n;i+=2){
                ans.push_back(a+i);
                ans.push_back(b-i);
            }
        }
        if(n%2!=0){
            ans.push_back(0);
            for(int i=0;i<n-1;i+=2){
                ans.push_back(a+i);
                ans.push_back(b-i);
            }
        }
        return ans;
    }
};
