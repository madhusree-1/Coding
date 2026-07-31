class Solution {
public:
    bool checkiftf(int i,int j,vector<string>&res,int n){
        //left
        for(int k = 0;k<j;k++){
            if(res[i][k] == 'Q') return false; 
        }
        //right
        for(int k =j+1;k<n;k++){
            if(res[i][k] == 'Q') return false;
        }
        // up
        for(int k =0;k<i;k++){
            if(res[k][j] == 'Q')  return false;
        }
        //down
        for(int k=i+1;k<n;k++){
            if(res[k][j] == 'Q')  return false;
        }
        //left-updiagonal
        int k=i,l=j;
        while(k-1>=0 && l-1>=0){
            k--;
            l--;
            if(res[k][l] == 'Q') return false;
        }
        //leftdown
        k =i,l=j;
        while(k+1<n && l-1>=0){
            k++;
            l--;
            if(res[k][l] == 'Q') return false;
        }
        //right up
        k=i,l=j;
        while(k-1>=0 && l+1<n){
            k--;
            l++;
            if(res[k][l] == 'Q') return false;
        }
        //right down
        k=i,l=j;
        while(k+1<n && l+1<n){
            k++;
            l++;
            if(res[k][l] == 'Q') return false;
        }
        return true;
    }
    void backtrack(set<vector<string>>&d2,vector<string>&res,int i,int j,int cnt,int n){
        // cout << i << " " << j << " " << cnt <<  endl;
        if(cnt == n){
            // cout << cnt << endl;
            d2.insert(res);
            return;
        }
        if(i>=n || j>=n) return;

        if(checkiftf(i,j,res,n)){
            res[i][j] = 'Q';
            cnt++;
            // for(int k=i;k<n;k++){
            // j = j+1;
            // cout << j << endl;
            backtrack(d2,res,i+1,0,cnt,n);
            res[i][j] = '.';
            cnt--;
            // }
        }
        // else{
        // for(int k=i;k<n;k++){
        //     j = j+1;
        //     cout << j << endl;
            backtrack(d2,res,i,j+1,cnt,n);
        // }
        // }
    }
    vector<vector<string>> solveNQueens(int n) {
        int cnt =0;
        string r1 = "";
        vector<string>res;
        set<vector<string>>d2;
        for(int i=0;i<n;i++){
            r1 += '.';
        }
        for(int i=0;i<n;i++){
            res.push_back(r1);
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         res[i][j] = 'Q';
                backtrack(d2,res,0,0,0,n);
        //         res[i][j] = '.';

        //     }
        // }
        vector<vector<string>>ans(d2.begin(),d2.end());
        return ans;
    }
};