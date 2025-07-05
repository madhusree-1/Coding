class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>freq;
        for(auto i:arr){
            freq[i]++;
        }
        int m=0,flag=0,answer;
        for(const auto pair:freq){
            if(pair.first==pair.second){
                flag=1;
               answer= max(m,pair.first);
            } 
        }
        if(flag==1) return answer;
        else return -1;
    }
};