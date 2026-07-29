class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int pos=0,cnt=0;
            while(pos != 32){
                if((i >> pos)&1){
                    cnt++;
                }
                pos++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};