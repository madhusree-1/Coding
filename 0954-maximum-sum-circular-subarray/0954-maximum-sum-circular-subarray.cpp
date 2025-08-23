class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        //use kadane algorithm
        int mini=nums[0];
        int maxi=nums[0];
        int flagin=nums[0];
        int flagax=nums[0];
        int total = nums[0];
        for(int i=1;i<nums.size();i++){
            total+=nums[i];
            //finding maximum
           flagax = max(nums[i],flagax+nums[i]);
           maxi=max(flagax,maxi);
           //finding minium
           flagin =min(nums[i],nums[i]+flagin);
           mini=min(flagin,mini);
        }
        if(maxi<0) return maxi;
        else
        //here total-mini is for circular aray
        return max(maxi,total-mini);
    }
};