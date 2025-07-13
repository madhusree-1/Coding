class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int>pq(trainers.begin(),trainers.end());
        sort(players.rbegin(),players.rend());
        int count=0;
        for(int i=0;i<players.size();i++){//  4
            if(pq.empty()) return count;
            if(pq.top()>=players[i]){// 8
                count++;//2
                pq.pop();//8
            }
        }
        return count;
    }
};