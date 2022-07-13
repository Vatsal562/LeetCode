class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        string ans[strs[0].length()];
        for(int i=0;i<strs.size();i++){
            for(int j=0;j<strs[i].length();j++){
                ans[j]+=strs[i][j];
            }
        }
        for(auto x:ans){
            cout<<x<<" ";
            if(is_sorted(x.begin(), x.end())==false)
                count++;
        }
        return count;
    }
};
