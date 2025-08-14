class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size();i++){
            int col=k;
            sort(score.begin(),score.end(),
            [col](const vector<int>&a ,const vector<int>&b){
                return a[col]>b[col];
            });
        }
        return score;
    }
};