class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        long long index=0, x=1;
        while(x<k){//8<5
            x=x<<1;//8
            index++;//3
        }
        index--;//2
        long long high=x,steps=0;
        while(index>=0){// a a a a a a a a
                        // 1 2 3 4 5 6 7 8
            long long mid=high>>1;
            if(k>mid){
                if(operations[index]==1){
                steps++;
                }
                k-=mid;
            }
            high=mid;
            index--;
        }
        return ('a'+(steps % 26));
    }
};