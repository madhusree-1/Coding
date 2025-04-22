int Count(int n){
    int ct=0;
    while(n!=0){
        int digit=n%10;
        ct++;
        n/=10;
    }
    return ct;
}
int findNumbers(int* nums, int numsSize) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(Count(nums[i])%2==0){
            c++;
        }
    }
    return c;
}