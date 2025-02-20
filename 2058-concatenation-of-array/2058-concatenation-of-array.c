/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* res = (int *)malloc(2*numsSize*sizeof(int));
    int index=0;
    for(int i=0;i<numsSize;i++){
        res[index]=nums[i];
        index++;
    }
    for(int i=0;i<numsSize;i++){
        res[index++]=nums[i];
    }
    // for()
    *returnSize=numsSize*2;
    return res;
}