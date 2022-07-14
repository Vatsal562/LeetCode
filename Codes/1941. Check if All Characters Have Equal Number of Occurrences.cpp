class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        
        for(auto x:s)
            m[x]++;
        
        int a = m[s[0]];
        
        for(auto x:m)
            if(x.second!=a) return false;
        
        return true;
    }
};
