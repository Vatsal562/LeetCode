class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> m;
        int count = 0;
        int rem = 0;
        
        for(auto x:nums){
            m[x]++;
        }
        
        for(auto x:m){
            //cout<<x.first<<" "<<x.second<<endl;
            if(x.second>1){
                while(x.second>1){
                    x.second-=2;
                    count++;
                }
            }
            if(x.second==1) rem++;
        }
        v.push_back(count);
        v.push_back(rem);
        return v;
    }
};
