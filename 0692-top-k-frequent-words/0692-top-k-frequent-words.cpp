class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res;
        map<string,int>freq;
        for(auto i : words){
            freq[i]++;
        }
        vector<pair<string,int>>freq1(freq.begin(),freq.end());
        sort(freq1.begin(),freq1.end(),[](const auto &a,const auto &b){
            if(a.second == b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            res.push_back(freq1[i].first);
        }
        return res;
    }
};