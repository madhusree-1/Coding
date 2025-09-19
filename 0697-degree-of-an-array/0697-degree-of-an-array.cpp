class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        ///finding the degree--> it is to find the map of maximum repeated element
        // take a vector of elements having maximum count
        // find its first and last postion
        //find diiference that would definitly will be shorest subarray
        unordered_map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        int maximum=0;
        vector<int>maxnum;

        for(auto &pair: freq){
            if(pair.second>maximum){
                maximum = pair.second;
            }
        }
        for(auto &pair: freq){
            if(pair.second == maximum){
                maxnum.push_back(pair.first);
            }
        }
        for(auto i : maxnum){
            cout << i << " ";
        }
        if(maximum==1) return 1;

        //searching process
        int mini =INT_MAX;
        for(int j=0;j<maxnum.size();j++){
            int start =0,end =0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==maxnum[j]){
                    start = i;
                    break;
                }
            }
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]==maxnum[j]){
                    end = i;
                    break;
                }
            }
            int length = end - start +1;
                if(length<mini){
                    mini = length;
                }
        }
        return mini;
    }
};