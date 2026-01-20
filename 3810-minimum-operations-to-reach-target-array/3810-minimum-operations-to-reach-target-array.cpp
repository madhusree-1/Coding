class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int cnt =0;
        while(1){
            unordered_map<int,vector<int>>freq;
            for(int i=0;i<nums.size();i++){
                freq[nums[i]].push_back(i);
            }
            for(auto const&[val,idx]:freq){
                if(idx.size()>1){
                    int flag =0;
                    for(auto i : idx){
                        if(nums[i]!=target[i]){
                        nums[i] = target[i];
                        flag =1;
                        }
                    }
                    if(flag ==1){
                        cnt++;
                    }
                }
                else{
                    int i = idx[0];
                    if(nums[i]!=target[i]){
                        nums[i] = target[i];
                        cnt++;
                    }
                }
           }
            if(nums == target) break;
        }
        return cnt;
    }
};