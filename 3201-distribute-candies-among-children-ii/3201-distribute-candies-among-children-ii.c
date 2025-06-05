// int min(int a,int b){
//     return a<b?a:b;
// }
// int max(int a,int b){
//     return a>b?a:b;
// }
long long distributeCandies(int n, int limit) {
    long long answer=0;
    for(int i=0;i<=fmin(limit,n);i++){
        if(n-i>2*limit) continue;
        answer+=fmin(n-i,limit)-fmax(0,n-i-limit)+1;
    }
    return answer;
}//fmin -->mininmun in floating numbers and fmax --> amximum in floating numbers