/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int low=0;
    int high = numsSize-1;
    int *result = (int*)malloc(2*sizeof(int));
    *returnSize=2;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
        int left=mid;
        while(left-1 >=0&& nums[left-1]==target){
            left--;
        }
        int right=mid;
        while(right+1<numsSize && nums[right+1]==target ){
            right++;
        }
        result[0]=left;
        result[1] =right;
        return result;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    result[0]=result[1]=-1;
    return result;

}