class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(begin(strs),end(strs));
        string a = strs[0];
        string b = strs[strs.size()-1];
        for(int i=0;i<a.length() && i<b.length();i++){
            if(a[i]==b[i])
                ans=ans+a[i];
            else
                break;
        }
        return ans;
        
    }
};
