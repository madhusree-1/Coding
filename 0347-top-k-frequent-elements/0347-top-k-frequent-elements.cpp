class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        vector<pair<int,int>> freqVec(freq.begin(), freq.end());
            sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
            });
        vector<int>res;
        for(auto pair:freqVec){
            if(res.size()<k){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};