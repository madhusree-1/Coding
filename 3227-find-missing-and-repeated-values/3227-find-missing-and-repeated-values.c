/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *result = (int*)malloc(2*sizeof(int));
    int *freq = (int*)calloc(gridSize * gridColSize[0] +1, sizeof(int));
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[i];j++){
            freq[grid[i][j]]++;
        }
    }
    for(int i=1;i<=gridSize*gridColSize[0];i++){
        if(freq[i]==2) result[0]=i;
        else if(freq[i]==0) result[1]=i;
    }
    *returnSize=2;
    return result;
}