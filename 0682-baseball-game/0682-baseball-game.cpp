class Solution {
public:
    bool isInteger(string &s){
        if(s[0]=='-'){
            return true;
        }
        return !s.empty() && all_of(s.begin(),s.end(),::isdigit);
    }
    int calPoints(vector<string>& operations) {
        stack<int>st;
        st.push(stoi(operations[0]));
        int i=1;
        while(!st.empty() && i<operations.size()){
            //integer(push)
            if(st.top()==100000){
                st.pop();
            }
            if(isInteger(operations[i])){
                st.push(stoi(operations[i]));
                cout << st.top() << "Integer" << endl;
            }
            // '+'(add st.top and pop again st.pop())
            if(operations[i]=="+"){
                int x= st.top();
                st.pop();
                int y = st.top();
                int sum = (x+y);
                st.push(x);
                st.push(sum);
            }
            // 'D'(st.top*2)
            if(operations[i]=="D"){
                int x = st.top();
                int sum2 =2*x;
                st.push(sum2); 
            }
            // 'C'(st.pop())
            if(operations[i]=="C"){
                st.pop();
            }
            i++;
            if(st.empty() && i<operations.size()){
                st.push(100000);
            }
        }
        long long total =0;
        while(!st.empty()){
            cout << st.top() << endl;
            total+=st.top();
            st.pop();
        }
        return total;
    }
};