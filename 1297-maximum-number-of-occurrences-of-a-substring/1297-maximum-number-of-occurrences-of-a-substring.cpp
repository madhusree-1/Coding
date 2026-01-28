class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int>freq;
        int low =0,high=0;
        int i=0,cnt=0;
        while(i<s.size()-minSize+1 && low < s.size() && high <s.size()){
            if(high-low+1 < minSize){
                high++;
            }
            else{
                set<char>se;
                string dup ="";
                for(int j=low;j<=high;j++){
                    dup+=s[j];
                    se.insert(s[j]);
                }
                if(se.size()<=maxLetters){
                    freq[dup]++;
                }
                low++;
                high++;
                i++;
            }
        }
        int maxi =0;
        for(auto pair:freq){
            if(pair.second > maxi){
                maxi = pair.second;
            }
        }
        return maxi;
    }
};