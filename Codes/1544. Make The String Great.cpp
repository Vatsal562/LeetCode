class Solution {
public:
    string makeGood(string s) {
        stack<int> st;
        string s1 = "";
        st.push(s[0]);
        
        for(int i=1;i<s.length();i++){
            if(st.empty()==true) st.push(s[i]);
            else{
                if(s[i]==(char)(st.top()+32) or s[i]==(char)(st.top()-32)){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        
        while(st.empty()==false){
            s1+=(char)(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};
