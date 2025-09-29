class Solution {
public:
    int getSum(int a, int b) {
        // better use bit manipulation
        while(b!=0){
            int carry = a &b;
            a= a^b;
            b= carry << 1;
        }
        return a;
    }
};