class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        int cnt =0,i=0,c=0;
        while(c<n){
            if(arr[i] == 0){
                i++;
                if(i > arr.size()-1){
                    i=0;
                }
            }
            if(arr[i] != 0){
                cnt++;
                // cout << cnt << " " << arr[i] << endl;
            }
            if(cnt == k){
                // cout << arr[i]  << " " << cnt << " " << i << endl;
                c++;
                if(c<n) arr[i] =0;
                cnt =0;
            }
            i++;
            if(i > arr.size()-1){
                    i=0;
                }
            }
          int ans =0;
          for(int i=0;i<arr.size();i++){
            if(arr[i] != 0){
                ans = arr[i];
                break;
            }
          }
          return ans;
    }
};