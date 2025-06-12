int maxAdjacentDistance(int* nums, int numsSize) {
    int diff=0,i,max=0;
    for(i=0;i<numsSize-1;i++){
        diff=abs(nums[i]-nums[i+1]);
        if(diff>max){
            max=diff;
        }
    }
    if(i==numsSize-1){
        if(abs(nums[i]-nums[0])>max){
            max=abs(nums[i]-nums[0]);
        }
    }
    return max;
}