/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *arr = (int*)malloc (wordsSize*sizeof(int));
    *returnSize = wordsSize;
    int i,j,k=0;
    for(i=0;i<wordsSize;i++){
        for(j=0;words[i][j]!='\0';j++){
            if(words[i][j]==x){
                arr[k++]=i;
                break;
            }
        }
    }
    *returnSize = k;
    return arr;
}