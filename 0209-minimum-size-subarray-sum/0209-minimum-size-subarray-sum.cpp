class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // let us consider the two pointer type
        int low = 0,high =0;
        int size = INT_MAX;
        int sum=nums[0];//2
        while(low<=high  && high < nums.size() && low<nums.size()){
            if(sum < target){//2 5 6 6
                high++;//0 1 2 3 4
                if(high < nums.size())
                sum += nums[high];//5 6 8 // 10
                // cout << sum << endl;
            }
            else{
                if(sum == target){//7
                    size = min(size,(high-low+1));    //4-2+1 = 3 //5-4+1
                    high++;//5
                    sum += nums[high];//10
                }
                else{
                    size = min(size,(high-low+1));
                    sum -= nums[low];// 6 7 9 2
                    // cout <<"sum: " << sum << endl;
                    low++;//4
                } //
            }
        }
        if(size == INT_MAX)
        return 0;
        else
        return size;
    }
};