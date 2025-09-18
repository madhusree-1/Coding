class Solution {
public:
    int Hcf(int a,int b){
        while(a!=0){
            int temp = a;
            a = b%a;
            b=temp;
        }
        return b;
    }
    long long lcm(long long a, long long b){
        return ((a/(Hcf(a,b)))*b);
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
         vector<long long> res;
        for (int x : nums) {
            long long curr = x;
            while (!res.empty() && Hcf(res.back(), curr) > 1) {
                curr = lcm(res.back(), curr);
                res.pop_back();
            }
            res.push_back(curr);
        }
        vector<int> ans(res.begin(), res.end());
        return ans;
    }
};