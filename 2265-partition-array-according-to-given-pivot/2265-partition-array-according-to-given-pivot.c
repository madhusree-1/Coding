#include <stdlib.h> // For malloc

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* A, int n, int pivot_value, int* returnSize) {
    // Allocate memory for the result array
    int* result = (int*)malloc(n * sizeof(int));
    if (!result) {
        *returnSize = 0;
        return NULL; // Return NULL if memory allocation fails
    }

    int smallerIndex = 0;
    int greaterIndex = n - 1;
    int pivotIndex = 0;

    // First pass: Fill the smaller elements
    for (int i = 0; i < n; i++) {
        if (A[i] < pivot_value) {
            result[smallerIndex++] = A[i]; // Place smaller elements first
        }
    }

    // Second pass: Fill the pivot elements
    for (int i = 0; i < n; i++) {
        if (A[i] == pivot_value) {
            result[smallerIndex + pivotIndex++] = A[i]; // Place pivot elements next
        }
    }

    // Third pass: Fill the greater elements
    for (int i = 0; i < n; i++) {
        if (A[i] > pivot_value) {
            result[smallerIndex + pivotIndex++] = A[i]; // Place greater elements last
        }
    }

    *returnSize = n; // Set the return size to the size of the original array
    return result;
}
