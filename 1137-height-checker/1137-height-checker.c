int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int heightChecker(int* heights, int heightsSize) {
    int nums[heightsSize+1];
    for(int i=0;i<heightsSize;i++){
        nums[i]=heights[i];
    }
    qsort(heights,heightsSize,sizeof(heights[0]),compare);
    int ct=0;
        for(int i=0;i<heightsSize;i++){
            if(nums[i]!=heights[i]) ct++;
        }
        return ct;
}