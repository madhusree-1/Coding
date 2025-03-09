int sumOfTheDigitsOfHarshadNumber(int x) {
    int ori=x;
    int sum=0;
    while(x>0){
        int digit=x%10;
        sum+=digit;
        x/=10;
    }
    if(ori%sum==0) return sum;
    else return -1;

}