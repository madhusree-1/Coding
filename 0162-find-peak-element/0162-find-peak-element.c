int findPeakElement(int* nums, int numsSize) {
    long long  max=INT_MIN,index=0;
    for(long long i=0;i<numsSize;i++){
        if(max<(long long)nums[i]){
            max=(long long )nums[i];
            index=i;
        }
    }
    return index;
}