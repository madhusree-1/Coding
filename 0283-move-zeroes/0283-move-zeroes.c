void moveZeroes(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
    }
    for(int k=j;k<numsSize;k++) nums[k]=0;
}