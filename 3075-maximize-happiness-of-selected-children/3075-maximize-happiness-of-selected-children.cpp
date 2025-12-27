class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long j =0;
        long long sum =0;
        int i=happiness.size()-1;
        sort(happiness.begin(),happiness.end());
        while(j<k && i>=0){
            long long ans = happiness[i]-j;
            if(ans >=0) sum += ans;
            i--;
            j++;
        }
        return sum;
    }
};