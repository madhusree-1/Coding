/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i]=nums[i]*2;
            nums[i+1]=0;
        }
    }
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            res[j]=nums[i];
            j++;
        }
    }
    *returnSize=numsSize;
    for(int k=j;k<numsSize;k++) res[k]=0;
    return res;
}