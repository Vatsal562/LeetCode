class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> m;

        for(auto x:s){
            m[x]++;
            if(m[x]==2) return x;
        }
        return ' ';
    }
};
