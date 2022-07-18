class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        string st1="",st2="";
        
        for(auto x:s){
            if(x=='#'){
                if(s1.empty()==true) continue;
                else s1.pop();
            } 
            else s1.push(x);
        }
        
        while(s1.empty()==false){
            st1+=s1.top();
            s1.pop();
        }
        
        for(auto x:t){
            if(x=='#'){
                if(s2.empty()==true) continue;
                else s2.pop();
            } 
            else s2.push(x);
        }
        
        while(s2.empty()==false){
            st2+=s2.top();
            s2.pop();
        }
        
        return (st1==st2);
    }
};
