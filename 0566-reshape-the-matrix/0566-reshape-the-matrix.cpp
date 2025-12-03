class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int size = mat[0].size() * mat.size();
        if(size != r*c){
            return mat;
        }
        vector<vector<int>> res;
        vector<int>single;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                single.push_back(mat[i][j]);
            }
        }
        vector<int>dup;
        for(int k=0;k<single.size();k++){
            // for(int i=0;i<r;i++){
            dup.push_back(single[k]);
            if(dup.size()== c){
                res.push_back(dup);
                dup.clear();
            }
            // }
        }
        return res;
    }
};