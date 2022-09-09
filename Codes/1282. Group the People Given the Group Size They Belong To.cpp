class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& A) {
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> m;
        
        for(int i=0;i<A.size();i++){
            m[A[i]].push_back(i);
            if(m[A[i]].size()==A[i]){
                ans.push_back(m[A[i]]);
                m.erase(A[i]);
            }
        }
        return ans;
    }
};
