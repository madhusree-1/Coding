long long maximumTripletValue(int* nums, int numsSize) {
    long long max =0,sum=0;
    for(long long i=0;i<numsSize-2;i++){
        for(long long j=i+1;j<numsSize-1;j++){
            for(long long k=j+1;k<numsSize;k++){
                sum=((long long)nums[i]-(long long)nums[j])*(long long)nums[k];
                if(sum>max){
                    max=sum;
                }
            }
        }
    }
    return max;
}