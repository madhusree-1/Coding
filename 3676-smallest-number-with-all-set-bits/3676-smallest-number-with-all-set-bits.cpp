class Solution {
public:
    int smallestNumber(int n) {
        int cnt=0;
        while(n!=0){
            int digit = n%2;
            if(digit ==1 || digit ==0){
                cnt++;
            }
            n/=2;
        }
        int res =0;
        while(cnt --){
            res += pow(2,cnt);
        }
        return res;
    }
};