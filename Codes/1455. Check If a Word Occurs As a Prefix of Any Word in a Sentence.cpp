class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> v;
        stringstream ss(sentence);
        string word;
        int a = searchWord.length();
        
        while(ss>>word)
            v.push_back(word);
        
        for(int i=0;i<v.size();i++){
            if(searchWord == v[i].substr(0,a))
                return i+1;
        }
        
        return -1;
    }
};
