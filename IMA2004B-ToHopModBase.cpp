#include <iostream>
#define RUNK for (int i = 0; i <= k; ++i)
#define RUNJIN for (int j = i; j <= n; ++j)
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll n, k, m, a[5005][5005];
ll C(ll k, ll n, ll m) {
    if (k == 0 || k == n) return 1;
    else {
        RUNK {
            RUNJIN {
                if (i == 0 || i == j) a[i][j] = 1;
                else a[i][j] = a[i][j - 1] % m + a[i - 1][j - 1] % m;
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