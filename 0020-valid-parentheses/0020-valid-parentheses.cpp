class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int flag=0;
        for(int i=0;i<s.size();i++){
            //if string containing open curves
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            // else make last ended to top of the stack
            else{
                if(s[i]==')' && !st.empty() && st.top()=='('){
                    st.pop();
                }
                else if(s[i]=='}' && !st.empty() && st.top()=='{'){
                    st.pop();
                }
                else if(s[i]==']' && !st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    flag=1;
                }
            }
        }
        if(st.empty() && flag==0) return true;
        else return false;
    }
};