#include <iostream>
#include <algorithm>
#include <math.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
using namespace std;
ll x[5], y[5];
int Giao(int l1, int r1, int l2, int r2) {
    int L = max(l1, l2); 
    int R = min(r1, r2);
    return max(0, R - L);
}
int main() {
    faster;
    for(ll i = 1; i <= 4; i++) cin >> x[i] >> y[i];
    ll X = Giao(x[1], x[2], x[3], x[4]); 
    ll Y = Giao(y[2], y[1], y[4], y[3]);
    cout << X * Y;
    return 0;
}
