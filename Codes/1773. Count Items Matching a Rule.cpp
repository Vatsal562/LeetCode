class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int x = items.size();
        int i,count=0;
        if(ruleKey=="type") i=0;
        else if(ruleKey=="color") i=1;
        else if(ruleKey=="name")i=2;
        
        for(int n=0;n<items.size();n++){
            if(items[n][i]==ruleValue)
                count++;
        }
        
        return count;
    }
};
