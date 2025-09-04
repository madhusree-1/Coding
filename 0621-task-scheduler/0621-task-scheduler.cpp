class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>freq;
        for(auto i : tasks){
            freq[i]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto pair: freq){
            //int fre = pair.second-'A';
            pq.push({pair.second,pair.first});
        }
        int time=0;
        while(!pq.empty()){
        vector<pair<int,char>> res;
        int cycle = n+1;
        while(cycle>0 && !pq.empty()){
            //temp vector
            auto [count,ch] = pq.top();pq.pop();
            time++;
            if(count-1 > 0){
                res.push_back({count-1,ch});
            }
            cycle--;
        }
        for(auto p:res){
            pq.push(p);
        }
        if(!pq.empty()){
            time+=cycle;
        }
        }
        return time;
    }
};