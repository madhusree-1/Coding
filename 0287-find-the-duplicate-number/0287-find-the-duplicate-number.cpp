class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        int answer;
        for(const auto &pair:freq){
            if(pair.second>1) answer=pair.first;
        }
        return answer;
    }
};