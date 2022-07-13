class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word,ans;
        while(ss >> word)
            ans = word;
        return ans.length();
    }
};
