class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int,int>freq;
        for(int i=0;s[i]!='\0';i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;t[i]!='\0';i++){
            freq[t[i]-'a']--;
        }
        for(auto pair:freq){
            if(pair.second!=0){
                return false;
            }
        }
        return true;
    }
};