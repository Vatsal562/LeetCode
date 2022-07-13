class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> m;
        
        for(auto x:target)
            m[x]++;
        
        for(auto x:arr){
            if(m.find(x)==m.end()) return false;
            m[x]--;
            if(m[x]==0) m.erase(x);
        }
        
        if(m.empty()==true) return true;
        
        return false;
    }
};
