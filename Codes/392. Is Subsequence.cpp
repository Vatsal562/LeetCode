class Solution {
public:
    bool isSubsequence(string s, string T) {
		    int x = s.length();
		    int y = T.length();
		    
		    int t[x+1][y+1];
        
            for(int i=0;i<x+1;i++){
                for(int j=0;j<y+1;j++){
                    if(i==0 or j==0) t[i][j] = 0;
                }
            }
            
            for(int i=1;i<x+1;i++){
                for(int j=1;j<y+1;j++){
                    if(s[i-1]==T[j-1]) t[i][j] = 1+t[i-1][j-1];
                    else t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
            return (x==t[x][y]);
    }
};
