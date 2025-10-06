class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alicepiles=0,bobpiles=0;
        int i=0,j=0;
        while(i<piles.size()){
            int maxi = max(piles[0],piles[piles.size()-1]);
            alicepiles+=maxi;
            piles.erase(remove(piles.begin(),piles.end(),maxi),piles.end());
            int mini = min(piles[0],piles[piles.size()-1]);
            bobpiles+=mini;
            piles.erase(remove(piles.begin(),piles.end(),mini),piles.end());
            i+=2;
        }
    if(alicepiles>bobpiles){
        return true;
    }
    else{
        return false;
    }
    }
};