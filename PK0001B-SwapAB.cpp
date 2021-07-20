#include <iostream>
#include <algorithm>
#define ulli unsigned long long int
using namespace std;
const ulli N = 101;
int main() {
    ulli n,q;
    cin >> n >> q;
    ulli a[n], u, v;
    for(ulli i = 1; i <= n; ++i) cin >> a[i];
    for(ulli i = 1; i <= q; ++i) {
        cin >> u >> v;
        swap(a[u], a[v]);
    }
    for(ulli i = 1; i <= n; ++i) cout << a[i] << ' ';
} 