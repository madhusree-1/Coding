class Solution {
public:
    void fun(int i,vector<int>&candidates,int target,vector<int>&arr,vector<vector<int>>&mat){
        // if(target <= 0){
            if(target==0){
                mat.push_back(arr);
            }
            // return;
        // }
        if(target > 0 && i < candidates.size()){
            arr.push_back(candidates[i]);
            fun(i,candidates,target-candidates[i],arr,mat);
            arr.pop_back();
        }
        if(target >0 && i+1 < candidates.size()){
            fun(i+1,candidates,target,arr,mat);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>mat;
        vector<int>arr;
        fun(0,candidates,target,arr,mat);
        // vector<vector<int>>res(mat.begin(),mat.end());
        return mat;
    }
};