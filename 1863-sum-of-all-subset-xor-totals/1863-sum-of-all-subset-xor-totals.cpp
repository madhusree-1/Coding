class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int totalsum =0;
        for(int i=0;i<(1<<nums.size());i++){
            int pos = 0,xoor=0;
            while(pos <= 12){
                int mask = 1 << pos;
                if((mask & i) > 0){
                    xoor ^= nums[pos];
                }
                pos++;
            }
            totalsum += xoor;
        }
        return totalsum;
    }
};