/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int* numberGame(int* nums, int numsSize, int* returnSize) {
    int * arr =(int*) malloc (numsSize*sizeof(int));
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    int i=0,j=1;
    for(int k=0;k<numsSize;k++){
        if(k%2==0){
            arr[k]=nums[j];
            j+=2;
        }
        else{
            arr[k]=nums[i];
            i+=2;
        }
    }
    *returnSize=numsSize;
    return arr;
}