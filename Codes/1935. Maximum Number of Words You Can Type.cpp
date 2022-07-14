class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream s(text);
        string word;
        vector<string> v;
        int count = 0;
        
        while(s>>word)
            v.push_back(word);
        
        for(auto x:v){
            int i=0;
            while(i<brokenLetters.size()){
                if(x.find(brokenLetters[i])!=-1){
                    count++;
                    break;
                }else{
                    i++;
                }
            }
        }
        
        return (v.size()-count);
    }
};
