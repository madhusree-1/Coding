/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int *res = (int*)malloc(sizeof(int)*heightSize);
    int k=0;
    for(int i=0;i<heightSize-1;i++){
        if(height[i]>threshold){
            res[k++]=i+1;
        }
    }
    *returnSize=k;
    return res;
}