class Solution {
public:
    int house(vector<int>&nums,vector<int>&dp,int i){
        if(i>=nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        dp[i] = max(nums[i]+house(nums,dp,i+2),house(nums,dp,i+1));
        cout << dp[i] << endl;
        return dp[i];
    }
    int rob(vector<int>& nums) {
        //dp question
        // there are two cases -- pick / skip
        vector<int>dp(nums.size()+1,-1);
        return house(nums,dp,0);
    }
};