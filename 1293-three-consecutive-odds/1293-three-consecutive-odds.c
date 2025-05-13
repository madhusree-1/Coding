bool threeConsecutiveOdds(int* arr, int numsSize) {
    int sum=0,flag=0;
    for(int i=0;i<numsSize-2;i++){
        sum=(arr[i]+arr[i+1]+arr[i+2]);
        if(sum%2!=0 && arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
            flag=1;
            break;
        }
    }
    if(flag==1) return 1;
    else return 0;
}