class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                count++;
            }
            else{
                count--;
            }
            if(count==0 && i != 0){
                cnt++;
            }
        }
        return cnt;
    }
};