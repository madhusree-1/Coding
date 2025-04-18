int compare(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int maxCoins(int* piles, int pilesSize) {
    qsort(piles,pilesSize,sizeof(piles[0]),compare);
    // for(int i=0;i<pilesSize;i++){
    //     printf("%d ",piles[i]);
    // }
    //  qsort(nums,numsSize,sizeof(nums[0]),compare);
    int sum=0;
        for (int i = 1; i < pilesSize / 3 * 2; i += 2) {
            sum += piles[i]; // Pick the second-highest in each group
        }
return sum;
}