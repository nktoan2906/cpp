#include <bits/stdc++.h>
using namespace std;
#define el cout << "\n"
#define f1(i, n) for (int i = 1; i <= n; i++)
#define maxn 100005
#define fi first
#define se second
long long n, t, a[maxn], p, s[maxn];
bool check(int m, int k) {
    return (m + s[p - 1] - s[m] >= 1ll * (p - m - 1) * k);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> t;
    f1(i, n) cin >> a[i];
    sort(a + 1, a + n + 1);
    f1(i, n) s[i] = s[i - 1] + a[i];
    while (t--)
    {
        int k;
        cin >> k;
        p = lower_bound(a + 1, a + n + 1, k) - a;
        if (p == 1) {
            cout << n;
            el;
            continue;
        }
        int l = 0, r = p;
        while (r - l > 1) {
            int mid = (l + r) / 2;
            if (check(mid, k)) r = mid;
            else l = mid;
        }
        cout << n - r;
        el;
    }
    return 0;
}