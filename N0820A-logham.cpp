#include <iostream>
#define ll  long long
#define FOR(i,n) for (ll i = 0; i < n; ++i)
using namespace std;
ll POW(ll a, ll n) {
    float s = 1;
    FOR(i,n) {
        s *= a;
    }
    return s;
}
int main() {
    ll a, n;
    cin >> a >> n;
    cout << POW(a, n);
}