class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr;
        for(int i=0;i<numRows;i++){
            vector<int>matrix;
            for(int j=0;j<=i;j++){
                matrix.push_back(0);
            }
            arr.push_back(matrix);
        }
        for(int i=0;i<numRows;i++){
            arr[i][0]=1;
            arr[i][i]=1;
        }
        for(int i=2;i<numRows;i++){
            for(int j=1;j<i;j++){
                arr[i][j]= arr[i-1][j]+arr[i-1][j-1];
            }
        }
        return arr;
    }
};