int countDigits(int num) {
   int count=0;
   int ori=num;
   while(num!=0){
    int digit = num%10;
    if(ori%digit == 0){
        count++;
    }
    num/=10;
   } 
   return count;
}