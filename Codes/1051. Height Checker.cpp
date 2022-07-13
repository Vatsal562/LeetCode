class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> expected = heights;
        sort(expected.begin(),expected.end());
        
        if(heights==expected) return 0;
        
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i]) count++;
        }
        return count;
    }
};
