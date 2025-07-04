class Solution {
public:
    int trailingZeroes(int n) {
    int twocount=0,fivecount=0;
    int x=1,y=1;
    while(pow(2,x)<=n){
        twocount+=(n/pow(2,x));
        x++;
    }
    while(pow(5,y)<=n){
        fivecount+=(n/pow(5,y));
        y++;
    }
    int min=twocount<fivecount?twocount:fivecount;
    return min;
    }
};