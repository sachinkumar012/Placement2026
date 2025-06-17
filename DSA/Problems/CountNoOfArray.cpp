#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
const int MX = 1e5 + 1;

long long fact[MX], inv_fact[MX];

class Solution {
    long long qpow(long long x, int n) {
        long long res = 1;
        while (n) {
            if (n & 1) res = res * x % MOD;
            x = x * x % MOD;
            n >>= 1;
        }
        return res;
    }

    long long comb(int n, int r) {
        if (r < 0 || r > n) return 0;
        return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
    }

    void init() {
        if (fact[0]) return;  // Already initialized
        fact[0] = 1;
        for (int i = 1; i < MX; ++i)
            fact[i] = fact[i - 1] * i % MOD;
        inv_fact[MX - 1] = qpow(fact[MX - 1], MOD - 2);
        for (int i = MX - 1; i > 0; --i)
            inv_fact[i - 1] = inv_fact[i] * i % MOD;
    }

public:
    int countGoodArrays(int n, int m, int k) {
        init();
        return comb(n - 1, k) * m % MOD * qpow(m - 1, n - 1 - k) % MOD;
    }
};

int main() {
    int n, m, k;
    cout << "Enter n, m, k: ";
    cin >> n >> m >> k;

    Solution sol;
    cout << "Number of good arrays: " << sol.countGoodArrays(n, m, k) << endl;

    return 0;
}
