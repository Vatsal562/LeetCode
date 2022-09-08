class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i=0;
        
        for(auto x:pushed){
            s.push(x);
            if(popped[i]==s.top()){
                while(s.empty()==false and popped[i]==s.top()){
                    s.pop();
                    i++;
                }
            }
        }
        return (s.empty());
    }
};
