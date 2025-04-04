int peakIndexInMountainArray(int* arr, int arrSize) {
    long long max=0,index;
    for(long long i=0;i<arrSize;i++){
        if(max<arr[i]){
            max=arr[i];
            index =i;
        }
    }
return index;
}