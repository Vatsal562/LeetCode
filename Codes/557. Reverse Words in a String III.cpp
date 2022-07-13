class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stringstream ss(s);
        string word;
        while (ss >> word) {
            cout<<word<<" ";
            reverse(word.begin(), word.end());
            ans+=word+" ";
        }
        int last = ans.size() - 1;
        while (last >= 0 && ans[last] == ' ')
            --last;
        return ans.substr(0, last + 1);
    }
};
