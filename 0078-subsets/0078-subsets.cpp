class Solution {
public:
    void PrintSubsets(vector<int>&nums,int *b,vector<vector<int>>&res,int n,int index){
        if(index>=n){
             vector<int>c;
            for(int i=0;i<n;i++){
                if(b[i]!=-11){
                c.push_back(b[i]);
                }
            }
            res.push_back(c);
            return;
        }
        //pick
        b[index] = nums[index];
        PrintSubsets(nums,b,res,n,index+1);
        //unpick
        b[index] =-11;
        PrintSubsets(nums,b,res,n,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //need to use the recursion to get the subsets if and only if n has less value
        int n = nums.size();
        int index =0;
        int b[n];
        vector<vector<int>>res;
        PrintSubsets(nums,b,res,n,index);
        return res;
    }
};