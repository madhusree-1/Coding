class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>res;
        for(int i=0;i<(1<<n);i++){
            int pos =0,cur =0;
            int pre = 1 << pos;
            string s= "";
            while(pos < n){
                int mask = 1 << pos;
                cur = (mask & i);
                if(cur == 0 && pre == 0){
                    s = "";
                    break;
                }
                if(cur > 0) cur = 1;
                s += to_string(cur);
                pos++;
                pre = cur;
            }
            if(s.size() !=0){
                res.push_back(s);
            }
        }
        return res;
    }
};