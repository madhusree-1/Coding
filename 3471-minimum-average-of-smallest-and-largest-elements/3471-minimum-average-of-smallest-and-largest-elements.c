int compare(const void *a , const void *b){
    return (*(int*)a-*(int*)b);
}
double minimumAverage(int* nums, int numsSize) {
    int *sum = (int *)malloc (numsSize*sizeof(int));
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    int low=0,high=numsSize-1,k=0;
    while(low<=high){
        sum[k++]=nums[low]+nums[high];
        low++;
        high--;
    }
    float mini = INT_MAX;
    for(k=0;k<numsSize/2;k++){
        if(mini>sum[k]){
            mini=sum[k];
        }
    }
    return mini/2;
}