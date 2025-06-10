class Solution {
public:
    int maxDifference(string s) {
        map<char,int>freq;
        for(auto i:s){
            freq[i]++;
        }
        int oddmax=0,evenmin=INT_MAX;
        for(const auto& pair:freq){
            // if(pair.second%2==0 && pair.second>evenmax){
            //         evenmax=pair.second;
            // }
            if(pair.second%2!=0 && pair.second>oddmax){
                oddmax=pair.second;
            }
            if(pair.second%2==0 && pair.second<evenmin){
                evenmin=pair.second;
            }
            // if(pair.second%2!=0 && pair.second>oddmin){
            //     oddmin=pair.second;
            // }
        }
    int maxdif;
    // int max=evenmax>oddmax?evenmax:oddmax;
    // int min=evenmin<oddmin?evenmin:oddmin;
    maxdif=oddmax-evenmin;
    return maxdif;
    }
};