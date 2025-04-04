int compare(const void *a ,const void *b){
    return *(int*)a-*(int*)b;
}
void sortColors(int* nums, int numsSize) {
    int *arr = (int*)malloc (numsSize*sizeof(int));
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize;i++){
        arr[i]=nums[i];
    }
    return;
}