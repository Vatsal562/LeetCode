class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> ans;
        string res = "";
        
        for(int i=s.length()-1;i>=0;i--){
            if(ans.empty()){
                ans.push(s[i]);
                continue;
            }
            if(s[i]==ans.top()){
                ans.pop();
            }
            else{
                ans.push(s[i]);
            }
        }
        
        while(ans.empty()==false){
            res+=ans.top();
            ans.pop();
        }
        
        return res;
    }
};
