/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//  int comp(const void *a , const void *b){
//     return (*(int*)a-*(int*)b);
//  }
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *res = (int*) malloc (numsSize*sizeof(int)); 
    int j=0,k=0;
    while(j<numsSize){
        int count=0;
        for(int i=0;i<numsSize;i++){
        if(nums[j]-nums[i]>0){
            count++;
        }
        }
        res[k++]=count;
        j++;
    } 
*returnSize=numsSize;
 return res;
}