class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>freq;
       int n=nums.size();
        for(int i:nums){
        freq[i]++;
       }
       for( auto &entry:freq){
        if(entry.second==1) return entry.first;
       }
       return -1;
    }
};