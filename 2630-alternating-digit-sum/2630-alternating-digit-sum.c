int isDigitcount(int n){
    int count=0;
    if(n==0) return 1;
    while(n>0){
        int digit=0;
        count++;
        n/=10;
    }
    return count;
}
int alternateDigitSum(int n) {
    int c1=0,c2=0,temp=n;
    while(n>0){
        int digit1=n%10;
        c1+=digit1;
        n/=10;
        int digit2=n%10;
        c2+=digit2;
        n/=10;
    }
    if(isDigitcount(temp)%2==0) return c2-c1;
    else return c1-c2;//
}