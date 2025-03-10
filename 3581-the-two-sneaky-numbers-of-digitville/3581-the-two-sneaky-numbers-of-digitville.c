/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int *arr = (int *)malloc(2*sizeof(int));
    int freq[100]={0};
    for(int i=0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(freq[nums[i]]==2) {
            arr[k++]=nums[i];
        }
        freq[nums[i]]=0;
    }
    *returnSize=2;
    return arr;
}