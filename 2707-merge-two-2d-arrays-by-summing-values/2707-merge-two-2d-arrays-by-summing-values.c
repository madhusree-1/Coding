/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** mergeArrays(int** nums1, int nums1Size, int* nums1ColSize, int** nums2, int nums2Size, int* nums2ColSize, int* returnSize, int** returnColumnSizes) {
    int i = 0, j = 0, k = 0;
    int maxsize = nums1Size + nums2Size;  // Worst case: No common elements
    int** result = (int**)malloc(maxsize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(maxsize * sizeof(int));

    while (i < nums1Size && j < nums2Size) {
        result[k] = (int*)malloc(2 * sizeof(int));  // Allocate row of size 2
        if (nums1[i][0] < nums2[j][0]) {
            result[k][0] = nums1[i][0];
            result[k][1] = nums1[i][1];
            i++;
        } else if (nums1[i][0] > nums2[j][0]) {
            result[k][0] = nums2[j][0];
            result[k][1] = nums2[j][1];
            j++;
        } else {  // Same index, merge values
            result[k][0] = nums1[i][0];
            result[k][1] = nums1[i][1] + nums2[j][1];
            i++;
            j++;
        }
        (*returnColumnSizes)[k] = 2;
        k++;
    }

    // Add remaining elements from nums1
    while (i < nums1Size) {
        result[k] = (int*)malloc(2 * sizeof(int));
        result[k][0] = nums1[i][0];
        result[k][1] = nums1[i][1];
        (*returnColumnSizes)[k] = 2;
        i++;
        k++;
    }

    // Add remaining elements from nums2
    while (j < nums2Size) {
        result[k] = (int*)malloc(2 * sizeof(int));
        result[k][0] = nums2[j][0];
        result[k][1] = nums2[j][1];
        (*returnColumnSizes)[k] = 2;
        j++;
        k++;
    }

    *returnSize = k;  // Update return size
    return result;
}