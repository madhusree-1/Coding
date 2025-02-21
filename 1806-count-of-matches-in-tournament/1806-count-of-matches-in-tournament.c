

int numberOfMatches(int n){
    int match,sum=0;
while(n>1){
if(n%2==0){//4
    match=n/2;//7
    sum+=match;//7
    n=n/2;
}
else{//7
    match=(n-1)/2;//3
    sum+=match;//3
    n = ((n-1)/2)+1;
}
}
return sum;
}