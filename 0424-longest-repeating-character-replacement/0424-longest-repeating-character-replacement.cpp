class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>freq;
        //wow
        //take low and high
        // logic : if window size - maxi count of freq map is less than or equal to k
        // expand when it is <= k
        // shrink when it is > k
        int low=0,high=0;
        freq[s[high]]++;
        int maxsize =0;
        while(low <= high && low< s.size() && high < s.size()){
            int maxcnt =0;
            for(auto pair : freq){
                if(pair.second > maxcnt){
                    maxcnt = pair.second;
                }
            }
            int window_size = high-low+1;
            if(window_size - maxcnt <= k){
                high++;
                freq[s[high]]++;
                maxsize = max(maxsize,window_size);
            }
            else{
                freq[s[low]]--;
                low++;
            }
        }
        return maxsize;
    }
};