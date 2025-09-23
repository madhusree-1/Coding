class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        // counting the consective characters freq
        int j=0;
        while(j<chars.size()){
            char cur = chars[j];
            int count=0;
            int i=j;
            while(i<chars.size() && chars[i]==cur){
                count++;
                i++;
            }
            s+=cur;
            if(count!=1){
                s+=to_string(count);
            }
            j=i;
        }
        chars.clear();
        for(int k=0;k<s.size();k++){
            chars.push_back(s[k]);
        }
        return chars.size();
    }
};