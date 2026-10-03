class Solution {
public:
    void fun(int i,vector<int>&arr,vector<vector<int>>&mat,vector<int>&nums,int n){
        //base case 
        if(i >= n){
            mat.push_back(arr);
            return;
        }
        //pick 
        arr.push_back(nums[i]);
        fun(i+1,arr,mat,nums,n);
        arr.pop_back();

        //non pick
        fun(i+1,arr,mat,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>mat;
        int n = nums.size();
        fun(0,arr,mat,nums,n);
        return mat;
    }
};