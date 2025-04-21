int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;  // sort in descending
}

int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    for (int op = 0; op < k; op++) {
        // Find the index of the first minimum element
        int minIndex = 0;
        for (int i = 1; i < numsSize; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
        }
        // Multiply that minimum element
        nums[minIndex] *= multiplier;
    }

    // Prepare result to return
    int* result = (int*)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        result[i] = nums[i];
    }

    *returnSize = numsSize;
    return result;
}