class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>prefix(arr.size());
        vector<int>res;
        prefix[0] = 0;
        for(int i=1;i<arr.size();i++){
            prefix[i] = arr[i] ^ prefix[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int last = queries[i][1];
            int first = queries[i][0];
            if(first > 0)
            res.push_back(prefix[last]^prefix[first-1]);
            else res.push_back(prefix[last]^arr[0]);
        }
        return res;
    }
};