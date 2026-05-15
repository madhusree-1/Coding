class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int l=0,r=0;
        freq[nums[l]]++; // 0-1
        int si =0;
        while(l<=r && l< nums.size() && r < nums.size()){
            while(freq[0] > k){//1>0
            if(l<nums.size()){
                freq[nums[l]]--;//0
                l++;//1
            }
            }
            r++;
            if(r < nums.size()){
            freq[nums[r]]++;//1
            }
            si = max(si,r-l);//0
        }
        return si;
    }
};