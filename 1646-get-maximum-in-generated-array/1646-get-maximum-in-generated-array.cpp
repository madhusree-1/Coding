class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>arr;
        if(n<1){
            arr.push_back(0);
        }
        if(n>=1){
        arr.push_back(0);
        arr.push_back(1);
        int ori = 2;
        while(ori <=n){
            if(ori%2==0){
                int dup = ori/2;//
                arr.push_back(arr[dup]);
            }
            else{
                int dup = arr[(ori/2)]+arr[(ori/2)+1];
                arr.push_back(dup);
            }
            ori++;
        }
        }
        // for(int i=0;i<arr.size();i++){
        //     cout << arr[i] << " ";
        // }
        int maxi = *max_element(arr.begin(),arr.end());
        return maxi;
    }
};