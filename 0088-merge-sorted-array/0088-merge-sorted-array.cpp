class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>arr;
        for(int i=0;i<m;i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            arr.push_back(nums2[i]);
        }
        // for(int i=0;i<m+n;i++){
        //     cout<< arr[i];
        // }
        nums1.clear();
        for(int i=0;i<m+n;i++){
            nums1.push_back(arr[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};