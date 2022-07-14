class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                int x=0;
                x=(int)s[i-1]+((int)s[i]-48);
                s[i]=(char)x;
            }
        }
        return s;
    }
};
