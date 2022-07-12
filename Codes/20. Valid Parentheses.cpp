class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty() or (s[i]==')' and st.top()!='(') or (s[i]==']' and st.top()!='[') or (s[i]=='}' and st.top()!='{'))
                    return false;
                else
                    st.pop();
            } 

        }
        return st.empty() ? true : false;
    }
};
