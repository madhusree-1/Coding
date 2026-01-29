class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        unordered_map<char,int>freq;
        for(int i=0;i<p.size();i++){
            freq[p[i]]++;
        }
        int low =0,high=0,k=p.size();
        int i=0,flag=0;
        unordered_map<char,int>freq1;
        while(i<s.size() && low<s.size() && high <s.size()){
            if(high-low+1<k){
                high++;
            }
            else if(flag==0){
                for(int j=low;j<=high;j++){
                    cout << s[j] << " ";
                    freq1[s[j]]++;
                }
                cout << endl;
                if(freq == freq1){
                    res.push_back(low);
                }
                flag=1;
                low++;
                high++;
                i++;
            }
            else if(flag == 1){
                if(freq1[s[low-1]]!=0)
                freq1[s[low-1]]--;
                if(freq1[s[low-1]]==0){
                    freq1.erase(s[low-1]);
                }
                // cout << s[low-1] << " ";
                freq1[s[high]]++;
                // for(auto pair:freq1){
                //     cout << pair.first << " " << pair.second << "@" << endl;
                // }
                // cout << endl;
                // cout << s[high] << endl;
                if(freq == freq1){
                    res.push_back(low);
                }
                low++;
                high++;
                i++;
            }
        }
        return res;
    }
};