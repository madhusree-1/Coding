int countSubarrays(int* nums, int n) {
    int count = 0;

    for (int i = 0; i <= n - 3; i++) {
        int first = nums[i];
        int second = nums[i+1];
        int third = nums[i+2];
        float sec = (float)second / 2;

        if (first + third == sec) {
            count++;
        }
    }

    return count;
}