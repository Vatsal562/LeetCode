class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans = {first};
        for(auto a:encoded){
            first^=a;
            ans.push_back(first);
        }
        return ans;
    }
};
