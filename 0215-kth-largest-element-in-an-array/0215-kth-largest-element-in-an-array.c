int compare(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int findKthLargest(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    return nums[k-1];
}