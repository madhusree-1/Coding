class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int size = matrix.size()*matrix[0].size();
        vector<int>res;
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        while(top<=bottom && left<=right){
            //1st loop->top,left->right
            if(top<=bottom){
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            }
            //2nd loop -> top->nbottom,rigght
            if(left<=right){
                for(int i=top;i<=bottom;i++){
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            // 3rd loop ->right->left,bottom
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            //4th loop: left,bottom->top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};