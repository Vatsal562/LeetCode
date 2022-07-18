class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> s;
        int count = 0;
        
        for(auto x:students) q.push(x);
        for(int i=sandwiches.size()-1;i>=0;i--) s.push(sandwiches[i]);
        
        while(q.empty()==false){
            if(q.front()==s.top()){
                q.pop();
                s.pop();
                count=0;
            }else{
                int a = q.front();
                q.pop();
                q.push(a);
                count++;
                if(count==q.size()) break;
            }
        }
        
        return q.size();
    }
};
