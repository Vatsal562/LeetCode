class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> v;
        unordered_set<char> s;
        string ans = "";

        remove(key.begin(), key.end(),' ');

        for(auto x:key){
            if(s.find(x)==s.end()){
                s.insert(x);
                v.push_back(x);
            }
        }

        //for(auto x:v) cout<<x<<" ";
        for(auto x:message){
            if(x!=' '){
                int a = find(v.begin(), v.end(), x) - v.begin();
                //cout<<a;
                ans = ans+(char)('a'+a);
            }else if(x==' '){
                ans = ans+' ';
            }
        }
        return ans;
    }
};
