/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *arr = (int*)malloc(numbersSize*(sizeof(int)));
    int low = 0;
    int high = numbersSize-1;
    while(low<high){
        int sum=numbers[low]+numbers[high];
        if(sum==target){
            arr[0]=low+1;
            arr[1]=high+1;
            break;
        }
        else if(sum<target)
            low++;
    
        else{
            high--;
        }
    }
    *returnSize=2;
    return arr;
}