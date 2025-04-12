class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>ds;
        for(int i=0;i<stones.size();i++){
            ds.push(stones[i]);
        }
        while(ds.size()>1){
            int y = ds.top();
            ds.pop();
            int x = ds.top();
            ds.pop();
            if(y>x){
                ds.push(y-x);
            }
        }
        if(ds.size()==0) return 0;
        else return ds.top();

    }
};