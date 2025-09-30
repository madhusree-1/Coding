class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n= nums.size();
        int t = n;
        vector<int>newnums;
        int sum=0;
        if(n==1) return nums[0];
        int count =1;
        while(count<=n){
        for(int i=0;i<t-1;i++){
            int res = (nums[i]+ nums[i+1])%10;
            // cout << res << endl;
            newnums.push_back(res);
        }
        t--;
        count++;
        nums.clear();
        for(int i=0;i<newnums.size();i++){
            nums.push_back(newnums[i]);
            // cout << newnums[i] << " ";
        }
        newnums.clear();
        sum=nums[0];
        // cout << "sum is : "<< sum << endl;
        }
        return sum;
    }
};