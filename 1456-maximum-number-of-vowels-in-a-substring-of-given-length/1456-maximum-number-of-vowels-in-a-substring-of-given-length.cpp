class Solution {
public:
bool isVowel(char c){
    if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {
        if(s.size()==1){
            if(isVowel(s[0])){
                return 1;
            }
            else return 0;
        }
        int low=0,high=0;
        int i=0,size=0;
        int flag=0,cnt=0;
        while(i<s.size()-((k/2)+1) && low < s.size() && high < s.size()){
            if(high-low+1 <k){
                high++;
            }
            else if(flag==0){
                for(int j=low;j<=high;j++){
                    cout << s[j] <<" ";
                    if(isVowel(s[j])){
                        cnt++;
                    }
                }
                flag =1;
                size = max(cnt,size);
                cout << size << endl;
                low++;
                high++;
                i++;
            }
            else if(flag==1){
                int prev = low-1;
                if(isVowel(s[prev])){
                    cnt =cnt-1;
                }
                if(isVowel(s[high])){
                    cnt = cnt+1;
                }
                cout << endl;
                size = max(cnt,size);
                cout << size << endl;
                low++;
                high++;
                i++;
            }
        }
        return size;
    }
};