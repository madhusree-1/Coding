class Solution {
public:
    int maxProduct(vector<int>& nums) {
      // apply kadane algorithm
      int maxprod = nums[0];
      int minprod = nums[0];
      int ans = nums[0];
    for(int i=1;i<nums.size();i++){
        int c1 = maxprod*nums[i];
        int c2 = minprod*nums[i];
        int c3 = nums[i];
        int mini = min({c1,c2,c3});
        int maxi = max({c1,c2,c3});
        maxprod = maxi;
        minprod = mini;
        ans = max(maxprod,ans);
    }
    return ans;
    }
};