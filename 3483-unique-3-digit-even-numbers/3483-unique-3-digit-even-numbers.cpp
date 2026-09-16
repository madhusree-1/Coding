class Solution {
public:
void fun(int i,vector<int>&digits,vector<vector<int>>&mat,vector<int>&arr,int n){
    if(i >= n || arr.size() == 3){
        if(arr.size() == 3){
        mat.push_back(arr);
        }
        return;
    }
    //pick
    arr.push_back(digits[i]);
    fun(i+1,digits,mat,arr,n);
    arr.pop_back();

    //non pick
    fun(i+1,digits,mat,arr,n);

}
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<vector<int>>mat;
        vector<int>arr;
        fun(0,digits,mat,arr,n);
        set<vector<int>>s;
        // for(int i=0;i<mat.size();i++){
        //     for(int j=0;j<mat[i].size();j++){
        //         cout << mat[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int cnt =0;
        for(int i=0;i<mat.size();i++){
            vector<int>arr;
            for(int j=0;j<mat[i].size();j++){
                arr.push_back(mat[i][j]);
            }
            sort(arr.begin(),arr.end());
            do{
                // for(auto num : arr){
                //     cout << num << " ";
                // }
                cout << endl;
                if(arr[0] != 0 && arr[arr.size()-1]%2 ==0){
                    s.insert(arr);
                }
            }while(next_permutation(arr.begin(),arr.end()));
        }
        return s.size();
    }
};