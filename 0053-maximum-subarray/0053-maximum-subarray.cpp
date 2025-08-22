class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int flag =nums[0],sum=nums[0];
        for(int i=1;i<nums.size();i++){
            flag = max(nums[i],nums[i]+flag);
            //flag = max(nums[i],flag);
            sum=max(flag,sum);
        }
        return sum;
    }
};