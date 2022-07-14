class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        vector<char> ans;
        
        if (s=="") return 0;
        
        for(auto x: s){
            if(x=='('){
                ans.push_back(x);
                int a = ans.size();
                res = max(res,a);
            }
            else if(x==')'){
                ans.pop_back();
            }
        }
        return res;
    }
};
