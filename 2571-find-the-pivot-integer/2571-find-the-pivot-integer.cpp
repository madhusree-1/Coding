class Solution {
public:
    int pivotInteger(int n) {
        int sum1 =0;
        int sum2 =0;
        int res =0;
        int flag =0;
        for(int i=1;i<=n;i++){
            sum1 +=i;//1
            for(int j=i;j<=n;j++){
                sum2 +=j;//36
            }
            if(sum1==sum2){
               res =i;
               return res;
            }
            sum2 =0;
        }
        return -1;
    }
};