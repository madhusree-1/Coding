class Solution {
public:
    void recurr(int n,vector<int>&arr){
        //base case
        if(n == 1){
            arr.push_back(0);
            arr.push_back(1);
            return;
        }
        recurr(n-1,arr);
        vector<int>res;
        res = arr;
        reverse(res.begin(),res.end());
        int power = 1 << n-1;
        for(int i=0;i<res.size();i++){
            res[i] = res[i]+power;
            arr.push_back(res[i]);
        }
    }
    vector<int> grayCode(int n) {
        //base case if n == 1 then array should be {0, 1}
        // n ==2 0 1 1 0 +2 0 1 3 2
        //n = 3 0 1 3 2 -> 2 3 1 0 +4 ->6 7 5 4
        vector<int>arr;
        recurr(n,arr);
        return arr;
    }
};