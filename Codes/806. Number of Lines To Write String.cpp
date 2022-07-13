class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
       vector<int> ans;
        int lines=1,count=100;
        for(int i=0;i<s.length();i++){
            int x=(int)s[i]-97;
            if(widths[x]<=count){
                count=count-widths[x];
                if(count==0 && i==s.length()-1){
                    count=0;
                }else if(count==0 && i!=s.length()-1){
                    count=100;
                    lines++;
                }
            }else{
                count=100-widths[x];
                lines++;
            }
        }
        ans.push_back(lines);
        ans.push_back(100-count);
        return ans;
    }
};
