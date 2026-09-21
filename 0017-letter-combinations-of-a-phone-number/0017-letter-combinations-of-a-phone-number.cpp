class Solution {
public:
    void solve(int i,string &digits,string &cur,vector<string>&res,unordered_map<int,string>&mp){
        if(i == digits.size()){
            res.push_back(cur);
            return;
        }
        string letter = mp[digits[i] -'0'];
        for(int j=0;j<letter.size();j++){
            cur.push_back(letter[j]);
            solve(i+1,digits,cur,res,mp);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        vector<string>res;
        string cur = "";
        solve(0,digits,cur,res,mp);
        return res;
    }
};