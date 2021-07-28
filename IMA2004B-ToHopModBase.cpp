#include <iostream>
#define RUNK for (int K = 0; K <= k; ++K)
#define RUNN for (int N = K; N <= n; ++N)
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll n, k, m, a[5005][5005];
ll C(ll k, ll n, ll m) {
    if (k == 0 || k == n) return 1;
    else {
        RUNK {
            RUNN {
                if (K == 0 || K == N) a[K][N] = 1;
                else a[K][N] = a[K][N - 1] % m + a[K - 1][N - 1] % m;
            }
        }
    }
    return a[k][n];
}
signed main() {
    FASTER;
    cin >> k >> n >> m;
    cout << C(k, n, m) % m;
}