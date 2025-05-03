class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int,int>topfreq;
        map<int,int>bottomfreq;
        for(auto i:tops){
            topfreq[i]++;
        }
        for(auto i:bottoms){
            bottomfreq[i]++;
        }
        int top_max=-1,bottom_max=-1;
        int topfirst,bottomfirst;
        for(auto i:topfreq){
            if(top_max<i.second){
                top_max=i.second;
                topfirst=i.first;
            }
        }
        for(auto i:bottomfreq){
          if(bottom_max<i.second){
            bottom_max=i.second;
            bottomfirst = i.first;
          }
        }
        int size=tops.size();
        int tcount=0,bcount=0,res=0;
        int flag =0;
        if(top_max>bottom_max){
            for(int i=0;i<size;i++){
                if(tops[i]!=bottoms[i] && bottoms[i]==topfirst){
                    tcount++;
                }
            }
            if(tcount+top_max==size){
                flag=1;
                res = tcount;
            }
        }
        else{
            for(int i=0;i<size;i++){
                if(tops[i]!=bottoms[i] && tops[i]==bottomfirst){
                    bcount++;
                }
            }
            if(bcount+bottom_max==size){
                flag=1;
                res=bcount;
            }
        }
        if(flag==1) return res;
        else return -1;
    }
};