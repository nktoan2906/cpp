#include <iostream>
#define ll long long 
using namespace std;
const int mod = 1e9 + 7;
ll Mu(ll a, ll b) {
    if (b == 0) return 1;
    ll kq = Mu(a, b / 2);
    kq = (kq * kq) % mod;
    if (b % 2 == 1) kq = (kq * a) % mod;
    return kq;
}
int main() {
    ll m = 2, n;
    cin >> n;
    cout << (ll)Mu(m, n) % mod;
}
