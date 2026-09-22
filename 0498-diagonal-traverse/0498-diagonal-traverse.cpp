class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<vector<int>>dup;
        int n= mat.size(),k=1;
        dup.push_back({mat[0][0]});
        while(k<n){
            int j = 0,i = k;
            vector<int>temp;
            while(j <= mat[k].size()-1 && i>=0){
                cout << mat[i][j] << endl;
                temp.push_back(mat[i][j]);
                j++;
                i--;
                if(j==mat[k].size() || i<0) break;
            }
            dup.push_back(temp);
            k++;
        }
        int m = mat[0].size(),l=1;
        while(l<m){
            int j = l,i = n-1;
            vector<int>temp;
            while((j>=0 && j <= m-1) && (i>=0 && i<=n-1)){
                cout << mat[i][j] << endl;
                temp.push_back(mat[i][j]);
                j++;
                i--;
                if(j==m || i<0) break;
            }
            dup.push_back(temp);
            l++;
        }
        vector<int>ok;
        for(int i=0;i<dup.size();i++){
            vector<int>ans;
            for(int j=0;j<dup[i].size();j++){
                ans.push_back(dup[i][j]);
            }
            if(i%2 != 0){
                reverse(ans.begin(),ans.end());
            }
            for(int k=0;k<ans.size();k++){
                ok.push_back(ans[k]);
            }
        }
        return ok;
    }
};