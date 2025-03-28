int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int minPairSum(int* nums, int numsSize){
qsort(nums,numsSize,sizeof(nums[0]),compare);
int max =0,sum=0,i=0,j=numsSize-1; 
while(i<j){
    sum+=nums[i]+nums[j];
    if(max<sum){
        max = sum;
    }
    sum=0;
    i++;
    j--;
}
return max;
}