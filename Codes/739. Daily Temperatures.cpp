class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> s;
        vector<int> v;
        
        for(int i=t.size()-1;i>=0;i--){
            while(s.empty()==false and s.top().first<=t[i]){
                s.pop();
            }
            
            if(s.empty()==true) v.push_back(0);
            else v.push_back(s.top().second-i);
            
            s.push({t[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
