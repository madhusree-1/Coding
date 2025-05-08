int max(int a,int b){
    int max=a>b?a:b;
    return max;
}
bool canJump(int* nums, int numsSize) {
    int maxHeight=0;
    for(int i=0;i<numsSize;i++){
        if(i>maxHeight) return 0;
        maxHeight=max(maxHeight,nums[i]+i);
    }
    if(maxHeight>=nums[numsSize-1]) return 1;
    else return 0;
}