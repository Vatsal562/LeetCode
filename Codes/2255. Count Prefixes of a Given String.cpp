class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for(auto word: words){
            int a  = word.length();
            if(word==s.substr(0,a)) count++;
        }
        return count;
    }
};
