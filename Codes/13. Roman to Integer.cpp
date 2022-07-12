class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        int i=0;
        for(i;i<s.length();i++){
            if(s[i]=='I' and s[i+1]=='V'){
                count+=4; 
                i++;
                continue;
            }
            if(s[i]=='I' and s[i+1]=='X'){
                count+=9; 
                i++;
                continue;
            }
            if(s[i]=='X' and s[i+1]=='L'){
                count+=40; 
                i++;
                continue;
            }
            if(s[i]=='X' and s[i+1]=='C'){
                count+=90; 
                i++;
                continue;
            }
            if(s[i]=='C' and s[i+1]=='D'){
                count+=400; 
                i++;
                continue;
            }
            if(s[i]=='C' and s[i+1]=='M'){
                count+=900; 
                i++;
                continue;
            }
            if(s[i]=='I') count+=1;
            if(s[i]=='V') count+=5;
            if(s[i]=='X') count+=10;
            if(s[i]=='L') count+=50;
            if(s[i]=='C') count+=100;
            if(s[i]=='D') count+=500;
            if(s[i]=='M') count+=1000;
        }
        if(i==s.length()-1){
            if(s[i]=='I') count+=1;
            if(s[i]=='V') count+=5;
            if(s[i]=='X') count+=10;
            if(s[i]=='L') count+=50;
            if(s[i]=='C') count+=100;
            if(s[i]=='D') count+=500;
            if(s[i]=='M') count+=1000;
        }
        
        return count;
    }
};
