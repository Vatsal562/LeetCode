class Solution {
public:
    void reverseString(vector<char>& s) {
        //cout<<s.size();
        int i=s.size()-1;
        int j=0;
        char temp;
        for(;i>j;i--,j++){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};
