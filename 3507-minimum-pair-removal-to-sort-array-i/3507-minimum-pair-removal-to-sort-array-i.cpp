class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        // int flag =0;
        vector<int>res;
        int cnt =0;
        while(!is_sorted(nums.begin(),nums.end())){
            int flag=0;
            int sum =0;
            int idx = -1;
            int mini = INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            sum = nums[i]+nums[i+1];
            if(sum < mini){
                mini = sum;
                idx = i;
                flag=1;
            }
        }
            if(flag ==1 && idx != -1){
                for(int i=0;i<idx;i++){
                    res.push_back(nums[i]);
                }
                nums.erase(nums.begin()+(idx+1));// 5
                nums.erase(nums.begin()+idx);
                res.push_back(mini);
                for(int i=idx;i<nums.size();i++){
                    res.push_back(nums[i]);
                }
                nums.clear();
                nums.assign(res.begin(),res.end());
                res.clear();
                cnt++;
                // for(int i=0;i<nums.size();i++){
                //         cout << nums[i] << " ";
                //     }
                //     cout << endl;
                }
            else break;
        }
        return cnt;
    }
};