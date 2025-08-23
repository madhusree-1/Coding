class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> elementArray;
        // int index =0;
        for(int i=0;i<nums1.size();i++){
            int target = nums1[i];//1
            int index = -1;
            for(int j=0;j<nums2.size();j++){
                if(target==nums2[j]){
                    index = j;//0
                    break;
                }
            }
        int l=-1;
        for(int k=index+1;k<nums2.size();k++){//1
            if(nums2[k]>target){//3
                l=nums2[k];//1->3
                break;
            }
        }
        elementArray.push_back(l);
    }

        return elementArray;
    }
};