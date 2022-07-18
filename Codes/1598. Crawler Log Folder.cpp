class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int> s;
        int count = 0;
        
        for(auto x:logs){
            if(x=="../"){
                if(s.empty()==true)  continue;
                else s.pop();
            }
            else if(x=="./") continue;
            else s.push(1);
        }
        
        while(s.empty()==false){
            count++;
            s.pop();
        }
        
        return count;
    }
};
