bool isZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    int* freq = (int*)calloc(numsSize + 1, sizeof(int));  // +1 for difference array

    // Step 1: Build difference array from queries
    for (int i = 0; i < queriesSize; i++) {
        int l = queries[i][0];
        int r = queries[i][1];

        freq[l]++;
        if (r + 1 < numsSize) {
            freq[r + 1]--;
        }
    }

    // Step 2: Convert to prefix sum
    for (int i = 1; i < numsSize; i++) {
        freq[i] += freq[i - 1];
    }

    // Step 3: Check if we can make nums[i] zero
    for (int i = 0; i < numsSize; i++) {
        if (freq[i] < nums[i]) {
            free(freq);
            return false;
        }
    }

    free(freq);
    return true;
}
