int distinctIntegers(int n) {
    // int num,count=1;
    // if(n==1) return 1;
    // for(int i=2;i<=n;i++){
    //     if(n%i==1){//
    //         //0-2 1-4
    //         num=i;//2
    //         count++;//2
    //     }}
    //     for(int i=2;i<=num;i++){
    //     if(num%i==1)//
    //         count++;
    // }
    // return count;
    if(n==1) return 1;
    else return n-1;
}