#include <iostream>
#include <algorithm>
#define RUN for(ulli i = 1; i <= n; ++i)
#define RUNQ for(ulli i = 1; i <= q; ++i)
#define ulli unsigned long long int
using namespace std;
const ulli N = 101;
int main() {
    ulli n,q;
    cin >> n >> q;
    ulli a[n], u, v;
    RUN cin >> a[i];
    RUNQ {
        cin >> u >> v;
        a[u] += v;
    }
    RUN cout << a[i] << ' ';
} 