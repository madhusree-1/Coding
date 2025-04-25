class Solution {
public:
    int Sum(int n){
        int sum=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int>freq;
        for(int i=1;i<=n;i++){
            freq[Sum(i)]++;
        }
        int max=0;
        for(auto entry:freq){
            if(entry.second>max){
                max=entry.second;
            }
        }
        int count=0;
        for(auto entry:freq){
            if(max==entry.second){
                count++;
            }
        }
        return count;
    }
};