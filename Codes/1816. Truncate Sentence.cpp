class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        string s1="";
        while(k!=0){
            ss>>word;
            if(k==1){
                s1+=word;
            }else{
                s1+=word+" ";
            }
            k--;
        }
        return s1;
    }
};
