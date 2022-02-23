#include <bits/stdc++.h>
#define ll long long
#define RUN(i, a, b) for (int i = a; i <= b; i++)
#define faster ios_base::sync_with_stdio(0);
using namespace std;
typedef pair<ll,ll> ii;
const ll N = 1e5 + 1;
ll n, c, cnt;
ii a[100001];
bool cmp (ii x, ii y) {
    return x.first < y.first;
}
int main() {
    faster; cin.tie(0); cout.tie(0);
    cin >> n >> c;
    RUN(i, 1, n) cin >> a[i].first >> a[i].second;
    sort (a + 1, a + n + 1, cmp);
    RUN(i, 1, n) {
        if (c >= a[i].first) {
            ++cnt;
            c += a[i].second;
        }
    }
    cout << cnt;
    return 0;
}
    