class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>dup(nums);
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<nums.size()-2;i++){
        int j=i+1,k=nums.size()-1;
        while(i<k && j<k){
            int sum1 = nums[i]+nums[j];
            if(sum1+nums[k]==0){
               res.push_back({nums[i],nums[j],nums[k]});
                j++;
            }
            else if(sum1+nums[k] > 0){
                k--;
            }
            else{
                j++;
            }
        }
        }
        set<vector<int>>s(res.begin(),res.end());
        return vector<vector<int>>(s.begin(),s.end());
    }
};