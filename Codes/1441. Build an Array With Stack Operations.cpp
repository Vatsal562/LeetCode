class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int i = 1;
        int count = 0;

        while(count!=target.size()){
            int index = find(target.begin(),target.end(),i) - target.begin();
            if(index==target.size()){
                v.push_back("Push");
                v.push_back("Pop");
            }else{
                v.push_back("Push");
                count++;
            }
            i++;
        }
        return v;
    }
};
