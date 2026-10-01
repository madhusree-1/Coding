class Solution {
public:
    void fun(int i,int n,int k,set<vector<int>>&res,vector<int>&arr){
        if(i>n || arr.size()== k){
            if(i>n && arr.size()==k) res.insert(arr);
            else if(arr.size()==k) res.insert(arr);
            else return;

        }
        if(i <= n){
            arr.push_back(i);
            fun(i+1,n,k,res,arr);
            arr.pop_back();
        }
        if(i<=n)
        fun(i+1,n,k,res,arr);
    }
    vector<vector<int>> combine(int n, int k) {
        set<vector<int>>res;
        vector<int>arr;
        fun(1,n,k,res,arr);
        vector<vector<int>>ans(res.begin(),res.end());
        return ans;
    }
};