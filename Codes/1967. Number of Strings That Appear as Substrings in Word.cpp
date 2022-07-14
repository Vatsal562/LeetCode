class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
            int search=word.find(patterns[i]);
            if (search != -1)
                count++;
        }
        
        return count;
    }
};
