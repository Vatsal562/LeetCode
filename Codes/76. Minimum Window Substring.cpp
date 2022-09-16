class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m,m2;
        int i = 0;
        int j = 0;
        int n = s.length();
        int ans = INT_MAX;
        string res = "";
        int temp;
        
        if(s.length()!=0 and t.length()!=0 and s.find(t[0])>s.length()) return "";
        
        if(s.length()<t.length()) return "";
        
        for(auto x:t) m[x]++;
        int count = m.size();
        
        for(auto x:s) m2[x]++;
        
        for(auto x:t){
            if(m2[x]<m[x]) return "";
        }
        
        for(auto x:m) cout<<x.first<<" "<<x.second<<" ";
        
        while(j<n){
            
            if(m.find(s[j])!=m.end()){
                m[s[j]]--;
                if(m[s[j]]==0) count--;
            } 
            
            if(count>0){
                j++;
            }
            
            if(count==0){
                while(count==0){
                    if(m.find(s[i])!=m.end()){
                        m[s[i]]++;
                        if(m[s[i]]==1) count++;
                        if(j-i+1<ans){
                            ans = min(ans,j-i+1);
                            temp = i;
                        }
                    } 
                    i++;
                }
                j++;
            }
        }
        cout<<ans<<endl;
        for(int m = temp;m<temp+ans;m++) res+=s[m];
        return res;
    }
};
