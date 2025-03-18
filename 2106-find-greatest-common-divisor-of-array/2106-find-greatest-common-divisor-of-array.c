int gcd(int n,int m){
    while(n!=0){
        int t= n;
        n=m%n;
        m=t;
    }
    return m;
}
int findGCD(int* nums, int numsSize) {
    int min=INT_MAX;
    int max=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
    }
    int res = gcd(max,min);
    return res;
}