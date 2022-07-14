class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,unordered_set<char>> m;
        int count = 0;
        
        for(int i=0;i<rings.size();i+=2){
            m[rings[i+1]-'0'].insert(rings[i]);
        }
        
        for(auto x:m){
            if(x.second.size()==3) count++;
        }
        
        return count;
    }
};
