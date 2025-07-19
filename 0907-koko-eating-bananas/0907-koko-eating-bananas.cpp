class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<high){
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i< n;i++){
                sum=sum+(piles[i]/mid);
                if(piles[i]%mid!=0){
                    sum=sum+1;
                } 
            }
            if(sum<=h){
                high = mid;
            }
            else{
                low=mid+1;
            }
        }
        if(low==high) {
                ans=low;
            }
        return ans;
    }
};