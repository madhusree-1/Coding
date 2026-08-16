class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int l1=l,r1=r;
        int n=0,m=0;
        while(l1){
            l1=l1>>1;
            n++;
        }
        while(r1){
            r1=r1>>1;
            m++;
        }
        if(m==n){
            long long ans=l;
            for(long long i=l;i<=r;i++){
                ans=ans&i;
            }
            return ans;
        }
        else{
           return 0;
        }
    }
};