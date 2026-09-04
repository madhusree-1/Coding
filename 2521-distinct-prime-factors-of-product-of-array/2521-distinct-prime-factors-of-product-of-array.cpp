void check(vector<int>&arr){
        for(int i=0;i<arr.size();i++){
            arr[i]=i;
        }
        for(int i=2;i<arr.size();i++){
            if(arr[i]==i){
                for(int j=i*i;j<arr.size();j+=i){
                    arr[j]=i;
                }
            }
        }
    }
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        vector<int>arr(1e4);
        check(arr);
        set<int>s;
        for(int i=0;i<nums.size();i++){
            int cur = nums[i];
            while(cur > 1){
                s.insert(arr[cur]);
                cur/=arr[cur];
            }
        }
        return s.size();
    }
};