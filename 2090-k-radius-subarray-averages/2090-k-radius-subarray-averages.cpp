class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k ==0) return nums;
        vector<int>res(nums.size(),-1);
        int window = (k*2)+1;
        int low = 0,high =0;
        int i=0,flag=0;
        long long sum =0;
        if(nums.size()>k)
        for(int j=0;j<k;j++){
            res[j] = -1;
        }
        for(int j = nums.size()-k;j<nums.size();j++){
            res[j] = -1;
        }
        int r = k;
        while(i<nums.size() && low < nums.size() && high < nums.size()){
            if(high-low+1 < window){
                high++;
            }
            else if(flag ==0){
                for(int j = low;j<=high;j++){
                    // cout << nums[j] << "nums is " << endl;
                    sum += nums[j];
                    // cout << sum << "sum is " << endl;
                    res[r] = sum/window;
                    // cout << res[r] << "res is " << endl;
                }
                // cout << endl;
                flag =1;
                r++;
                low++;
                high++;
                i++;
            }
            else if(flag==1){
                sum += nums[high]-nums[low-1];
                // cout << sum << " "<< endl;
                res[r] = sum/window;
                low++;
                high++;
                r++;
                i++;
            }
        }
        return res;
    }
};