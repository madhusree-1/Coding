class Solution {
public:
    void fun(string expression,vector<int>&ans){
        bool operators = false;
        for(int i=0;i<expression.size();i++){
            if(expression[i] == '+' ||expression[i] == '-' ||expression[i] == '*'){
                operators = true;
                string left = expression.substr(0,i);
                string right = expression.substr(i+1,expression.size());
                vector<int>l,r;
                fun(expression.substr(0,i),l);
                fun(expression.substr(i+1,expression.size()),r);
                for(int j=0;j<l.size();j++){
                    for(int k=0;k<r.size();k++){
                        int a = l[j];
                        char op = expression[i];
                        int b = r[k] ;
                        int dup =0;
                        if(op == '+') dup = a+b;
                        if(op == '-') dup = a-b;
                        if(op == '*') dup = a*b;
                        ans.push_back(dup);
                    }
                }
            }
        }
        if(operators == false){
            ans.push_back(stoi(expression));
            return;
        }
    }
    vector<int> diffWaysToCompute(string expression) {
        vector<int>ans;
        fun(expression,ans);
        return ans;
    }
};