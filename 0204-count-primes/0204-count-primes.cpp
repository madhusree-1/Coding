int maxi = 5*1e6;
vector<bool>prime(maxi+1,true);
vector<int>res(maxi+1,0);
bool flag = 0;
int cnt =0;
void check(){
    if(flag == 0){
    prime[0] = prime[1] = false;
    for(int i = 2;i*i <= maxi;i++){
        // res.push_back({i,cnt});//2 0 
        // cout << i << " " << cnt << endl;
        if(prime[i] == true){
            // res.push_back({i,cnt});
            for(int j=i*i;j<maxi;j+=i){
                if(j%i == 0) prime[j] = false;
                // cout << j << " " << j << " " << cnt << endl;
                // res.push_back({j,cnt});
            }
        }
    }
    for(int i=0;i<=maxi;i++){
        res[i] = cnt;
        if(prime[i] == 1)
        cnt++;
    }
    flag = 1;
    }
}
class Solution {
public:
    int countPrimes(int n) {
        check();
        // sort(res.begin(),res.end());
        if(n<=2) return 0;
       int ans = res[n];
       return ans; 
    }
};