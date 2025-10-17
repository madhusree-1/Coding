class Solution {
public:
    int findLUSlength(string a, string b) {
        int i=0,j=0;
        int cnt=0;
        while(i<a.size() && j<b.size()){
            if(a[i]!=b[j]){
                // flag =1;
                break;
            }
            else{
                cnt++;
            }
            i++;
            j++;
        }
        if(b.size() == a.size() && cnt==a.size()){
            return -1;
        }
        else{
            return max(a.size(),b.size());
        }
    }
};