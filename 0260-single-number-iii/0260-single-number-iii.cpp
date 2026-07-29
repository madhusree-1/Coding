class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //the most significant bit -> 1 at ehich position
      int res = nums[0];
      for(int i=1;i<nums.size();i++){
        res ^= nums[i];
      }
        int pos =-1;
      while(res != 0){
        int bit = abs(res%2);
        pos++;
        if(bit == 1){
            break;
        }
        res/=2;
      }
      int res1=0,res2=0;
      for(int i=0;i<nums.size();i++){
        if((nums[i] >> pos)&1){
            res1 ^= nums[i];
        }
        else{
            res2^=nums[i];
        }
      }
      return {res1,res2};
    }
};