bool checkpowers(int power,int n){
    if(n==0) return 1;
    if(pow(3,power)>n) return 0;
    bool additionalpower = checkpowers(power+1,n-pow(3,power));
    bool skippingpower = checkpowers(power+1,n);
    return additionalpower || skippingpower;
}
bool checkPowersOfThree(int n) {
    return checkpowers(0,n);
}