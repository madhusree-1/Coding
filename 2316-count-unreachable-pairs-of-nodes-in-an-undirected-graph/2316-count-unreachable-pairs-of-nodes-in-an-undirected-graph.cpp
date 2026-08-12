class Solution {
public:
    // union -find
    int findparent(vector<int>&parent,int i){
        if(parent[i] == i) return i;
        else return parent[i] = findparent(parent,parent[i]);
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        // sort(edges.begin(),edges.end());
        vector<int>parent(n);
        for(int i=0;i<n;i++){
            parent[i] = i;
        }
         // 0 0 2 3 4 0 6 7 8 9 10
         // 2 0 0 0 0 0 0  0 0 0 
        vector<int>rank(n,0);
        //find ans connect
        for(int i=0;i<edges.size();i++){
            int u=0,v=0;
            if(edges[i][0] < edges[i][1]){
                u = edges[i][0];
                v = edges[i][1];
            }
            else{
                v = edges[i][0];
                u = edges[i][1];
            }
            int par1 = findparent(parent,u); //7
            int par2 = findparent(parent,v); //10
            if(par1 != par2){ // true
                if(rank[par1] < rank[par2]){
                    parent[par1] = par2;

                }
                else if(rank[par1] > rank[par2]){ // 1> 0
                    parent[par2] = par1; //1 -->0
                }
                else{ //equal
                parent[par2] = par1;  // 10 - 7
                rank[par1] += 1;
                }
            } 
        }
        map<int,int>mp;
        for(int i=0;i<parent.size();i++){
            mp[findparent(parent,i)]++;
        }
        long long ans =0;
        long long remaining = n;
        for(auto &pair : mp){
            int cur = pair.second;
            remaining -= cur;
            ans += (cur*remaining);
        }
        return ans;
    }
};