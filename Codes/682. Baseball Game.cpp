class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> ans;
        int sum = 0;
        
        for(auto x: ops){
            if(x=="D"){
                int a = ans.top();
                ans.push(2*a);
            }
            else if(x=="C"){
                ans.pop();
            }
            else if(x=="+"){
                int a = ans.top();
                ans.pop();
                int b = ans.top();
                ans.push(a);
                ans.push(a+b);
            }
            else{
                ans.push(stoi(x));
            }
        }
        while(ans.empty()==false){
            sum+=ans.top();
            ans.pop();
        }
        return sum;
    }
};
