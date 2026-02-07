class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // not variable size
       vector<int>res;
        stack<pair<int,int>> s1,s2;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            int max_in = INT_MIN;
            if(s1.empty()){
                max_in = val;
            }
            else{
                max_in = max(s1.top().second,val);
            }
             s1.push({val,max_in});
            // to empty the s1 and push into s2
            if(i>=k-1){//0
                if(s2.empty()){
                int max_out=INT_MIN;
                    while(!s1.empty()){
                        int val = s1.top().first;
                        s1.pop();
                        if(s2.empty()){
                           max_out = val;
                        }
                        else{
                            max_out = max(val,s2.top().second);
                        }
                        s2.push({val,max_out});
                    }
                }
                // to insert into res 
            if(s1.empty() && s2.empty()) res.push_back(INT_MIN);
            else if(s1.empty()) res.push_back(s2.top().second);
            else if(s2.empty()) res.push_back(s1.top().second);
            else res.push_back(max(s1.top().second,s2.top().second));
            if(!s2.empty()){
                    s2.pop();
                }
            }    
        }
        return res;
    }
};