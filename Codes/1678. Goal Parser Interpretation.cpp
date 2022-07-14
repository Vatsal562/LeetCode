class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='G')
                ans=ans+'G';
            else if(command[i]=='(' && command[i+1]==')'){
                ans=ans+'o';
                i++;
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                ans=ans+"al";
                i+=3;
            }
        }
        
        return ans;
    }
};
