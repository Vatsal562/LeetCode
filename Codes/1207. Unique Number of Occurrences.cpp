class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        
        for(auto x:arr)
            m[x]++;
        
        for(auto x:m)
            s.insert(x.second);
        
        if(s.size()==m.size()) return true;
        
        return false;
    }
};
