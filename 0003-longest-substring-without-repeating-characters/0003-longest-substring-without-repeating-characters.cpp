class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,max_length=0;
        set<char>seen;
        while(right<s.size()){
            if(seen.find(s[right])==seen.end()){
                seen.insert(s[right]);
                max_length =max(max_length,right-left+1);
                right++;
            }
            else{
                seen.erase(s[left]);
                left++;
            }
        }
        return max_length;
    }
};