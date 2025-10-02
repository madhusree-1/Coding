class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        set<char>lower;
        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                lower.insert(word[i]);
            }
        }
        string res(lower.begin(),lower.end());
        for(int i=0;i<res.size();i++){
            for(int j=0;j<word.size();j++){
                if(toupper(res[i])==word[j]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};