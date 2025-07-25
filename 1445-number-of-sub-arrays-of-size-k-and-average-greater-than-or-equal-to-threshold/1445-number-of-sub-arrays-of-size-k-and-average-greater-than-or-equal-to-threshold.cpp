class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int curSum = 0,count=0;
        for(int i=0;i<k;i++){
            curSum+=arr[i];
            if(curSum/k>=threshold){
                count=1;
            }
        }
        //maxSum=curSum;
        for(int i=k;i<arr.size();i++){
            curSum+=arr[i]-arr[i-k];
            //maxSum=max(maxSum,curSum);
            double avg = curSum/k;
            if(avg >= threshold){
                count++;
            }
        }
        return count;
    }
};