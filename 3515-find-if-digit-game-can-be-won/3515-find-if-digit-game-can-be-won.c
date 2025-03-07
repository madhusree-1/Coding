int count_of_digits(int n){
    int count=0;
    while(n!=0){
        int digit = n%10;
        count++;
        n/=10;
    }
    return count;
}
bool canAliceWin(int* nums, int numsSize) {
    int sum1=0,sum2=0;
    for(int i=0;i<numsSize;i++){
       if(count_of_digits(nums[i])==1) sum1+=nums[i];
       if(count_of_digits(nums[i])==2) sum2+=nums[i]; 
    }
    if(sum1!=sum2) return 1;
    else return 0;
}