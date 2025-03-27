int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int findNonMinOrMax(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    if(numsSize<=2) return -1;
    else return nums[1];
}