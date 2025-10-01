class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>str;
       str.push(s[0]);
       int i=1;
       while(i<s.size()){
            if(!str.empty() && str.top()==s[i]){
                str.pop();
            }
            else{
            str.push(s[i]);
            // cout << str.push(s[i]) << " ";
            }
            i++;
       }
       string res="";
       while(!str.empty()){
        res+=str.top();
        str.pop();
       }
       reverse(res.begin(),res.end());
       return res;
    }
};