class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0,high=0;
        int i=0,flag=0;
        int cnt=0;
        long long sum=0;
        while(i<arr.size() && low <arr.size() && high <arr.size()){
            if(high-low+1 < k){
                high++;
            }
            else if(flag==0){
                for(int j=low;j<=high;j++){
                    sum+=arr[j];
                }
                if((sum/k) >= threshold){
                    cnt++;
                }
                flag=1;
                low++;high++;
                i++;
            }
            else if(flag==1){
                sum += arr[high]-arr[low-1];
                // cout << "sum is " << sum << endl;
                if((sum/k) >= threshold){
                    cnt++;
                }
                low++;high++;i++;
            }
        }
        return cnt;
    }
};