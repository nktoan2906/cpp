#include <bits/stdc++.h>
using namespace std;
#define el cout << "\n"
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define maxn 100005
#define MOD 1000000007
long long n, a[maxn], l, r, s[maxn], f[maxn], g[maxn];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> l >> r;
    f1(i, n) cin >> a[i], s[i] = s[i - 1] + a[i];
    f[0] = g[0] = 1;
    g[-1] = 0;
    f1(i, n) {
        long long s1 = s[i] - r, s2 = s[i] - l;
        int p1 = lower_bound(s, s + i, s1) - s - 1, p2 = upper_bound(s, s + i, s2) - s - 1;
        f[i] = (f[i] + g[p2] - g[p1] + MOD) % MOD;
        g[i] = (g[i - 1] + f[i]) % MOD;
    }
    cout << f[n];
    return 0;
}