class Solution {
public:
    int hammingWeight(int n) {
        int pos =0,cnt =0;
        while(pos != 32){
            if((n >> pos) & 1){
                cnt++;
            }
            pos++;
        }
        return cnt;
    }
};