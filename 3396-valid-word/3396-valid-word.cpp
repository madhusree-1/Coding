class Solution {
public:
    bool isVowel(char ch) {
    ch = tolower(ch); // Make it case-insensitive
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    bool isValid(string word) {
        int n=word.length();
        int vowels=0,consonants=0,digit=0;
        if(n<3) return false;
        for(int i=0;i<n;i++){
            if(isalpha(word[i])){
                if (isVowel(word[i])){
                    vowels++;
                    //cout << vowels;
                }
                else{
                    consonants++;
                    //cout << consonants;
                }
            }
            // else{
            //     if(word[i]>='0' && word[i]<='9' || word[i]=='@' 
            //     || word[i]=='#' || word[i]=='$'){
            //         digit++;
            //         //cout << digit;
            //     }
            // }
            if (!isalnum(word[i])) {
                // If not a letter or digit, it's invalid
                return false;
            }
            }
            
                if(vowels>0 && consonants >0){
                    return true;
            }
        return false;
    }
};