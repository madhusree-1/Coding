int min(int n,int m){
    int mini = n<m?n:m;
    return mini;
}

int minimumOperations(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%3!=0){
         count += min((nums[i]%3),3-(nums[i]%3));
    }
    }
    return count;
}