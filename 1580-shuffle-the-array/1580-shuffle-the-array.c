

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* arr = (int*)malloc(numsSize*sizeof(int));
    int i,j=0;//j need to be intilasised other wise it will not be considered
    for(i=0;i<n;i++){// 0 1 2 
        arr[j++]=nums[i];// 0-0 2-1 4-2
        arr[j++]=nums[i+n];//1-3 3-4 5-5
        }
    *returnSize = numsSize;
    return arr;
}