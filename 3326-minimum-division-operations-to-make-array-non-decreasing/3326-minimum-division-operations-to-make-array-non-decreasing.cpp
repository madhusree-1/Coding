 vector<int>arr(1000005,0);
 bool is_correct = false;
 void check(vector<int>&arr){
    if(is_correct == true) return;
        for(int i=1;i<arr.size();i++){
            arr[i] = i;
        }
        for(int i=2;i*i<arr.size();i++){
            if(arr[i] == i){
                for(int j=i*i;j<arr.size();j+=i){
                    if(arr[j] == j) arr[j] = i;
                }
            }
        }
        is_correct = true;
    }
class Solution {
public:
    int minOperations(vector<int>& nums) {
        check(arr);
        int n = nums.size();
        int cnt =0;
        for(int i = n-2;i>=0;i--){
            if(nums[i] > nums[i+1]){
                nums[i] = arr[nums[i]];
                // cout << nums[i] << endl;
                cnt++;
                if(nums[i] > nums[i+1]){
                    return -1;
                }
            }
        }
        return cnt;
    }
};