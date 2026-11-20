class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,pair<int,vector<int>>>mp;
        vector<string>dup;
        dup = strs;
        for( int i =0 ; i< strs.size(); i++){
            sort(strs[i].begin(),strs[i].end());
        } 
        for(int i =0 ;i< strs.size() ;i++){
            mp[strs[i]].first++;
            mp[strs[i]].second.push_back(i);
        }
        vector<vector<string>>ans;
        for(auto &m : mp){
            vector<string>res;
            int s =m.second.second.size();
            for(int i=0;i<s;i++){
                res.push_back(dup[m.second.second[i]]);
            }
            ans.push_back(res);
        }
        return ans;
    }
};