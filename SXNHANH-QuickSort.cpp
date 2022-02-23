#include <bits/stdc++.h>
#define ll long long
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std; 
const ll N = 1e6;
typedef pair<ll,ll> ii;
int n, a[N], dem = 1;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)  cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (a[i] <= a[n]) {
            swap(a[i], a[dem]);
            ++dem;
        }
    }
    swap(a[dem], a[n]);
    for (int i = 1; i <= n; i++) {
        if (dem == i) cout << '[' << a[i] << "] "; 
        else cout << a[i] << " ";
    }
}
    