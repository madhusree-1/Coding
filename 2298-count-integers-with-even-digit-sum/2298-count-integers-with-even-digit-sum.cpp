class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int ori = i;
            int sum=INT_MIN;
            while(ori>0){
                int digit = ori%10;
                sum+=digit;
                ori/=10;
                // cout<<i<<" ";
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};