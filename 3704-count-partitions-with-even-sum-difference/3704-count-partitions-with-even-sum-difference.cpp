class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum1 =0;
        int cnt=0;
        int dup=0;
        for(int i=0;i<nums.size()-1;i++){
            sum1+=nums[i];
            int sum2 =0;
            for(int j=i+1;j<nums.size();j++){
                sum2 +=nums[j];
            }
            int res = abs(sum1-sum2);
            if(res%2==0){
                cnt++;
            }
            sum2= sum2 - nums[i+1];
        }
        return cnt;
    }
};