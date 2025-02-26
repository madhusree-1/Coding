/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int max(int n,int m){
return n>m?n:m;
 }
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *arr = (bool*)malloc(candiesSize*sizeof(bool));
    int maxi=0;
    for(int i=0;i<candiesSize;i++){
        maxi = max(maxi,candies[i]);
    }
    for(int i=0;i<candiesSize;i++){
        if(candies[i]+extraCandies>=maxi){
            arr[i]=true;
        }
        else{
            arr[i]=false;
        }
    }
    *returnSize = candiesSize;
    return arr;
    }
