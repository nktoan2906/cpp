#include <iostream>
#define ll long long
#define FOR3(i,n) for( ll i=3; i<=n; ++i)
using namespace std;
const int mod = 1e9 + 7;
ll a[1000002],n;
int main() {
    cin>>n;
    a[1] = a[2] = 1;
    FOR3(i,n) {
        a[i] = ((3*a[i-1] % mod ) - (a[i-2] % mod)) % mod;
        if (a[i] < 0) a[i] = mod - a[i] * -1;
    }
    cout<<a[n];
    return 0;
}
    