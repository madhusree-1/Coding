const int MOD=1e9+7;
long long powMod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}
int countGoodNumbers(long long n) {
     long long evenPos = (n + 1) / 2; 
    long long oddPos = n / 2;        
    long long evenWays = powMod(5, evenPos, MOD);
    long long oddWays = powMod(4, oddPos, MOD);

    return (evenWays * oddWays) % MOD;
}