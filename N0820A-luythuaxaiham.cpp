//http://laptrinhphothong.vn/Problem/Details/5833
#include <iostream>
#define ll  long long
using namespace std;
ll luythua(ll a, ll n) {
    float s = 1;
    for (ll i = 0; i < n; i++) {
        s *= a;
    }
    return s;
}
int main() {
    ll a, n;
    cin >> a >> n;
    cout << luythua(a, n);
}