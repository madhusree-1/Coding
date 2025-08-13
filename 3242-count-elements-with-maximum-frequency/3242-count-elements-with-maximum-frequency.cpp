class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int maxi=0;
        for(auto pair:freq){
            maxi=max(maxi,pair.second);
        }
        int sum=0;
        for(auto pair:freq){
            if(pair.second==maxi){
                sum+=pair.second;
            }
        }
        return sum;
    }
};