class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long xoor = start ^ goal;
        int k=0,cnt=0;
        while(k <= 31){
        long long mask = 1 << k;
        if((xoor & mask) > 0){
            cnt++;
        }
        k++;
        }
        return cnt;
    }
};