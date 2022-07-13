class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        
        for(auto word:words){
            string code = "";
            for(auto c:word){
                code = code+v[c-'a'];
            }
            s.insert(code);
        }
        return s.size();
    }
};
