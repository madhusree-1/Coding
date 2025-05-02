class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>freq;
        for(auto key:nums){
            freq[key]++;
        }
        vector<int>res;
        for(auto i:freq){
            if(i.second>=2){
                res.push_back(i.first);
                res.push_back(i.first);
            }
            else{
                res.push_back(i.first);
            }
        }
        for(int i=0;i<res.size();++i){
            nums[i]=res[i];
        }
        int length = res.size();
      //  return nums;
        return length;
    }
};