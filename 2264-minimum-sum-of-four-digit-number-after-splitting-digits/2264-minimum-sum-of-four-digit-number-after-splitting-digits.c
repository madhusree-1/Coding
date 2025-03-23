int compare(const void * a,const void * b){
    return (*(int*)a- *(int*)b);
}
int minimumSum(int num) {
int *arr= (int*)malloc(4*sizeof(int));
int i=0;
    while(num>0){
        arr[i]=num%10;
        i++;
        num/=10;
    }
    qsort(arr,4,sizeof(arr[0]),compare);
    int sum1=0,sum2=0,sum=0;
    sum1+=arr[0]*10+arr[3];
    sum2+=arr[1]*10+arr[2];
    sum=sum1+sum2;
    return sum;
}