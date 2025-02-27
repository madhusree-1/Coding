int countPairs(int* nums, int numsSize, int target) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        for(int j=1;j<numsSize;j++){
            if((i<j) && (nums[i]+nums[j])<target) count++;
        }
    }
    return count;
}