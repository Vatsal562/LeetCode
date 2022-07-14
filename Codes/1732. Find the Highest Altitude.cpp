class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans = {0};
        int res = 0;
        for(auto a:gain){
            res = res+a;
            ans.push_back(res);
        }
        sort(ans.begin(), ans.end());
        return ans[ans.size()-1];
    }
};
