class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(i+2<s.length() && s[i+2]=='#'){
                int t = (s[i] - '0') * 10 + (s[i + 1] -  '0');
				ans += char(t + 96);  // char(t + 'a' - 1)
                i+=2;
            } 
            else{
                ans=ans+(char)(s[i]+48);
            }
        }
        return ans;
    }
};
