/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findPeaks(int* mountain, int mountainSize, int* returnSize) {
    int *res = (int*)malloc(sizeof(int)*mountainSize);
    int j=0,count=0;
    for(int i=1;i<mountainSize-1;i++){
        if(mountain[i]>mountain[i+1] && mountain[i]>mountain[i-1]){
            res[j++]=i;
            count++;
        }
    }
    *returnSize=count;
    return res;
}