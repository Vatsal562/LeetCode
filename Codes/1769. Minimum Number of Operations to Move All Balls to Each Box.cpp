class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v1;
        vector<int> ans;
        
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]=='1') v1.push_back(i);
        }
        
        for(int i=0;i<boxes.length();i++){
            int sum=0;
            for(auto j:v1){
                int a = abs(j-i);
                sum+=a;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
