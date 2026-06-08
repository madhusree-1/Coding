class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int col =1;
        sort(intervals.begin(),intervals.end(),
        [col](const vector<int>&a,const vector<int>&b){
            return a[col] < b[col];
        });
        int cnt =0,endtime = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] >= endtime){
                endtime = intervals[i][1];
            }
            else cnt++;
        }
        return cnt;
    }
};