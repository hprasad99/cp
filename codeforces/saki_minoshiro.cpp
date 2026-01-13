/**
 * non-negative integers: 1,23, 45, 3 -> N
 * 1, 23, 45, 3 < M (9289) all integers are less than M
 * sequence s in data s = [s0, s1, ... , sN-1] where sI is ith integer in s.
 * pi(S) length of longest proper prefix = proper suffix
 * p < N such that sI = sN-(P-I) for all integers 0 <= I < P
 * effort saved pi(S)^2
 * sum % MOD
 */
#include<iostream>
using namespace std;
static const long long MOD = 998244353;

long long modpow(long long base, long long exp) {
    long long res = 1 % MOD;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long M;
    cin >> N >> M;

    vector<long long> F(N + 2, 0);

    // F[k] = number of sequences with border length >= k
    for (int k = 1; k < N; k++) {
        if (2 * k <= N) {
            F[k] = modpow(M, N - 2LL * k);
        } else {
            F[k] = modpow(M, 2LL * k - N);
        }
    }

    long long ans = 0;

    // G[k] = F[k] - F[k+1]
    for (int k = 1; k < N; k++) {
        long long Gk = (F[k] - F[k + 1] + MOD) % MOD;
        long long contrib = (1LL * k * k) % MOD;
        ans = (ans + contrib * Gk) % MOD;
    }

    cout << ans << "\n";
    return 0;
}