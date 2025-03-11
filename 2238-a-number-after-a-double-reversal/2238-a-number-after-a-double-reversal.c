bool isSameAfterReversals(int num) {
    if(num>0){
        int digit=num%10;
        if(digit==0) return 0;
    }
    return 1;
}