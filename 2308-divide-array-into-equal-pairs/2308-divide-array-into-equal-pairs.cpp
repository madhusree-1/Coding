class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int found =0;
        unordered_map<int,int>freq;
        for(auto num:nums){
            freq[num]++;
        }
        for(auto &entry:freq){
            if(entry.second %2!=0){
                return false;
            }
        }
        return true;
    }
};