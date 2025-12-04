class Solution {
public:
    int findPoisonedDuration(vector<int>& timeseries, int duration) {
       int poisontime = 0;
       for(int i=0;i<timeseries.size()-1;i++){
        int sum = abs(timeseries[i]-timeseries[i+1]);
        if(sum>duration){
            sum = duration;
        }
        poisontime+=sum;
       }
       poisontime += duration;
       return poisontime;
    }
};