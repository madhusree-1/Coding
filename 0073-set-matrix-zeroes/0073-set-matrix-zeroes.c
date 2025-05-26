
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int** res = (int**)malloc(sizeof(int*) * matrixSize);
    for (int i = 0; i < matrixSize; i++) {
        res[i] = (int*)malloc(sizeof(int) * matrixColSize[i]);
    }
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            res[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            if (res[i][j] == 0) {
                for (int r = 0; r < matrixSize; r++) {
                    matrix[r][j] = 0;
                }
                for (int c = 0; c < matrixColSize[i]; c++) {
                    matrix[i][c] = 0;
                }
            }
            // res[i][j] = matrix[i][j];
        }
    }
}