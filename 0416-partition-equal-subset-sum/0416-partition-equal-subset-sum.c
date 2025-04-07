// int compare(const void *a,const void *b){
//     return *(int*)a-*(int*)b;
// }
bool canPartition(int* nums, int numsSize){
    int sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    if(sum%2!=0) return 0;
    int target = sum/2;
    bool *dp = (bool*)malloc((target+1)*sizeof(bool));
    for (int i = 0; i <= target; i++) {
        dp[i] = false;
    }
    dp[0]=true;
    for (int i = 0; i < numsSize; i++) {
        for (int j = target; j >= nums[i]; j--) {
            dp[j] = dp[j] || dp[j - nums[i]];
        }
    }
    bool res= dp[target];
    free(dp);
    return res;
}