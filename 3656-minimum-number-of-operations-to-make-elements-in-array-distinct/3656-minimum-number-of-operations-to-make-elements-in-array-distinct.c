int minimumOperations(int* nums, int numsSize) {
//    int freq[100];
//    for(int i=0;i<numsSize;i++){
//     freq[nums[i]]++;
//    } 
//    int count=0;
//    for(int i=0;i<numsSize;i++){
//     if(freq[nums[i]]==1){
//         count++;
//     }
//    // freq[nums[i]]=0;
//    }
//    if(count==numsSize) return 0;
//    int c = numsSize/3;
//    if((nums[numsSize-1] != nums[numsSize-2] && nums[numsSize -2] !=nums[numsSize-3] && nums[numsSize-3] !=nums[numsSize-1])){
//     return c-1;
//    }
//    else if(numsSize<=3) return 1;
//    else return c+1;
int operations=0;
int start =0; 
int end = numsSize-1;
while (start <= end) {
        bool seen[100001] = {false};
        bool isDistinct = true;
        
        
        for (int i = start; i <= end; i++) {
            if (seen[nums[i]]) {
                isDistinct = false;
                break;
            }
            seen[nums[i]] = true;
        }

        if (isDistinct) {
           
            return operations;
        } else {
            
            start += 3;
            operations++;
        }
    }

    return operations;

}