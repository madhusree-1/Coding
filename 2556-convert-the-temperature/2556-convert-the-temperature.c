/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
   double* ans=malloc(2*sizeof(double));
    double k=(double)(celsius+273.15);
    double f=(double)(celsius*1.80+32.00);
    ans[0]=k;
    ans[1]=f;
    *(returnSize)=2;
    return ans;
}