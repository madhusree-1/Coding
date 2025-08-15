class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,index=0,count=0;
        vector<int>ans(nums.size(),0);
        //if array contain 0's then 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                index=i;
            }
            else{
            prod*=nums[i];
            }
        }
        if(count>1) return ans;
        else if(count==1) ans[index]=prod;
        else{
            for(int i=0;i<nums.size();i++){
                ans[i]=prod/nums[i];
            }
        }
        return ans;
    }
};