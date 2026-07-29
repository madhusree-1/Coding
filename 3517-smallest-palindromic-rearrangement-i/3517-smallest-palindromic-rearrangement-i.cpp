class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mp;
        string res = "";
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string middle = "";
        for(auto &p : mp){
            if(p.second % 2 !=0){
                middle += p.first;
            }
            int n = p.second;
            int  t = n/2;
            while(t > 0){
                res += p.first;
                t--;
            }
        }
        string rev = res;
        reverse(rev.begin(),rev.end());
        res += middle;
        res += rev;
        return min(res,s);
    }
};