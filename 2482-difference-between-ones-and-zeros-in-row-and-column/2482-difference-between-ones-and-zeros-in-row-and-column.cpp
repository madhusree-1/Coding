class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rs = grid.size();
        int cs = grid[0].size();
        vector<vector<int>> res(rs,vector<int>(cs,0));
        vector<int>oi;
        vector<int>oj;
        for(int i=0;i<rs;i++){
            int count1 =0;
            // int count2=0;
            for(int j=0;j<cs;j++){
                if(grid[i][j]==1){
                    count1++;
                }
                // if(grid[j][i]==1){
                //     count2++;
                // }
            }    
            oi.push_back(count1);
            // oj.push_back(count2);
        }
        for(int j=0;j<cs;j++){
            int count2=0;
            for(int i=0;i<rs;i++){
                if(grid[i][j]==1){
                    count2++;
                }
            }
            oj.push_back(count2);
        }
        for(int i=0;i<oi.size();i++){
            for(int j=0;j<oj.size();j++){
                res[i][j]=(oi[i]+oj[j]-(rs-oi[i]+(cs-oj[j])));
            }
        }
        
        return res;
    }
};