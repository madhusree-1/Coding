/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compare(const void*a,const void *b){
    return *(int*)a-*(int*)b;
}
int** divideArray(int* nums, int numsSize, int k, int* returnSize, int** returnColumnSizes) {
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    int rows=(numsSize/3),cols=3;
    int** arr=(int**)malloc(rows*sizeof(int*));
    *returnColumnSizes = (int*)malloc(rows * sizeof(int));
    for(int i=0;i<rows;i++){
        arr[i]=(int*)malloc(cols*sizeof(int));
    }
    int l=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=nums[l++];
        }
        (*returnColumnSizes)[i]=cols;
    }
    *returnSize=rows;
    int count=0;
    for(int i=0;i<rows;i++){
            if(abs(arr[i][0]-arr[i][1])>k || abs(arr[i][1]-arr[i][2])>k || 
                                                    abs(arr[i][2]-arr[i][0])>k){
                        // Free allocated memory
            for (int j = 0; j < rows; j++) {
                free(arr[j]);
            }
            free(arr);
            free(*returnColumnSizes);
            *returnSize = 0;
            return NULL;
                                                    }
    }
    return arr;
}