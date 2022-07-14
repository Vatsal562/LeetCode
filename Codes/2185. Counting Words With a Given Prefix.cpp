class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        int a = pref.length();
        cout<<a<<" ";
        for(auto x:words){
            cout<<x.substr(0,a)<<" ";
            if(x.substr(0,a)==pref)
                res++;
        }
        return res;
    }
};
