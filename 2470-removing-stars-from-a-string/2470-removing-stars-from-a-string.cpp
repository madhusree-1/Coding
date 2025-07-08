class Solution {
public:
    string removeStars(string s) {
        stack <char> st;
        for (char c : s) {
            if (c != '*') {
                st.push(c);
            }
            else{
                if(!st.empty())
                st.pop();
            }
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
         reverse(res.begin(), res.end());
        return res;
    }
};