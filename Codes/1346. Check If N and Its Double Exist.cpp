class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<float> s;
        
        for(auto x: arr){
            float a = x*2;
            float b = (float)x/2;
            
            if(s.find(a)!=s.end() or s.find(b)!=s.end()) return true;
            
            s.insert(x);
        }
        return false;
    }
};
