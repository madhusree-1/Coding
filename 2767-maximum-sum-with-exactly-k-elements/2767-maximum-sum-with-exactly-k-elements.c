int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);  // Cast pointers and return the difference
}
int maximizeSum(int* nums, int numsSize, int k) {
    qsort(nums,numsSize, sizeof(int), compare);
   int sum = nums[numsSize-1];//5
   int total=0;
   while(k>0){
    total+=(sum++);
    k--;
   }
   return total;
}