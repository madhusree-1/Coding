class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>res;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
        int val = spells[i];
        int l=0,r=potions.size()-1;
        int remember=0;
        while(l<=r){
            int mid = l+(r-l)/2;;
            if((long long)potions[mid]*val>=success){
                remember = potions.size()-mid;
                // cout << remember << " ";
                r = mid -1;
            }
            else{
                    l = mid + 1;
                }

        }
        res.push_back(remember);
        }
        return res;
    }
};