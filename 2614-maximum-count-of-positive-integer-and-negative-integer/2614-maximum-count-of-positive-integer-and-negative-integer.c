int maximumCount(int* nums, int numsSize) {
    int max=0,min=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0) min++;
        if(nums[i]>0) max++;
    }
    int res=max>min?max:min;
    return res;
}