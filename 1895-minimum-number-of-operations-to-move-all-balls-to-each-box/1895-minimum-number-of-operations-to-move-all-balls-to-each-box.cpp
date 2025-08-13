class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>arr;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
                arr.push_back(i);
            }
        }
        vector<int> res;
        for(int i=0;i<boxes.size();i++){
            int distance=0;
            for(int j=0;j<arr.size();j++){
                distance+=abs(i-arr[j]);
            }
            res.push_back(distance);
        }
        return res;
    }
};