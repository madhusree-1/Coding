/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int left[numsSize];
    int right[numsSize];
    int i=0,sum1=0,sum2=0;
    while(i<numsSize){
    for(int k=0;k<numsSize;k++){// 10 4 8 3 
        left[i]=sum1; // 0 10 14 22 
        sum1+=nums[k];
        i++;// 10 14 22 
    }
    }
    int j=numsSize-1;
    while(j>=0){
    for(int k=numsSize-1;k>=0;k--){
        right[j]=sum2;
        sum2+=nums[k];
        j--;
    }
    }
    int *res = (int*)malloc(sizeof(int)*numsSize);
    for(int k=0;k<numsSize;k++){
        res[k]=abs(left[k]-right[k]);
    }
    *returnSize=numsSize;
    return res;
}