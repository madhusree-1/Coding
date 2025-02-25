int max(int n,int m){
    int maxi = n>=m?n:m;
    return maxi;
}
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int sum=0;
    for(int i=0;i<accountsSize;i++){
            sum=0;
        for(int j=0;j<accountsColSize[i];j++){
            sum+=accounts[i][j];
        }
        accountsColSize[i]=sum;
    }
    int res =0 ;
   for(int i=0;i<accountsSize;i++){
    res = max(res,accountsColSize[i]);
   }
   return res;
}