int compare(const void * a,const void *b){
    return *(int*)a-*(int*)b;
}
int maxProduct(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    return (nums[numsSize-1]-1)*(nums[numsSize-2]-1);
}