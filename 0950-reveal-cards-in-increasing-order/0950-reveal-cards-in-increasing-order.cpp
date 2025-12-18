class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        queue<int>q;
        vector<int>res(deck.size(),0);
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
        int i=0;
        // 2 3 5 7 11 13 17
        // 0 1 2 3 4 5 6 
        while(!q.empty() && i<deck.size()){
            int save = q.front();//2
            // cout << "save " << save << " ";
            q.pop();//2 3 4 5 6 
            res[save]= deck[i];//2 3 
            if(!q.empty()){
                int next = q.front();//1
                // cout << "next " << next << endl;
                q.pop();//2 3 4 5 6 
                q.push(next);// 2 3 4 5 6 1
            }
            i++;//1
        }
        return res;
    }
};