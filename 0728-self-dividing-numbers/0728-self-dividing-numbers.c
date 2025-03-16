int SelfDividing(int num) {
    if (num == 0) return 0;  
    
    int ori = num;  
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || ori % digit != 0) {  
            return 0; 
        }
        num /= 10;
    }
    return 1; 
}

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int maxSize = (right - left + 1);  
    int* res = (int*)malloc(maxSize * sizeof(int)); 
    int k = 0;  

    for (int i = left; i <= right; i++) {
        if (SelfDividing(i)) {  
            res[k++] = i;  
        }
    }
    
    *returnSize = k;  
    return res;  
}
