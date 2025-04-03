// int maxheight(int n,int m){
//     return n>m?n:m;
// }
int trap(int* height, int heightSize) {
    int left=0,right=0,sum=0;
    int maximumHeight=0,index=0;
    for(int i=0;i<heightSize;i++){
        sum+=height[i];
    }
    for(int i=0;i<heightSize;i++){
       if(maximumHeight<height[i]){
        maximumHeight=height[i];
        index=i;
       }
    }
    //printf("%d ",index);
    int max=0;
    for(int i=0;i<=index;i++){// 0 1 0 2 1 0 1 
        if(height[i]>max){//
            max=height[i];//2
        }
        left+=max;//1+1+2+
    }
     max=0;
    for(int i=heightSize-1;i>index;i--){
        if(height[i]>max){
            max=height[i];
        }
        right+=max;
    }
return left+right-sum;
}