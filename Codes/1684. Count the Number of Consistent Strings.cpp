class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // int count = 0;
        // for(int i=0;i<words.size();i++){
        //     for(auto x:words[i]){
        //         size_t found = allowed.find(x);
        //         if (found == string::npos){
        //             count++;
        //             break;
        //         }
        //     }
        // }
        // return words.size()-count;
        
        int s = words.size();
        vector<bool> ans(26,false);
        for(auto x: allowed)
            ans[x-'a']=true;
        for(auto m: words){
            for(auto n: m){
                if(ans[n-'a']==false){
                    s--;
                    break;
                }
            }
        }
        return s;
    }
};
