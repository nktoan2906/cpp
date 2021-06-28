#include<iostream>
#define FOR(i,k) for (int i = 0; i <= k; ++i)
#define FOR1(j,n) for (int j = i; j <= n; ++j)
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll mod = 1e9 + 7;
ll n,k,m;
ll a[5005][5005];
ll C(ll k, ll n,ll m) {
    if (k == 0||k == n) return 1;
    else{
        FOR(i,k){
            FOR1(j,n){
                if (i == 0||i == j) a[i][j] = 1;
                else a[i][j] = a[i][j - 1] % m + a[i - 1][j - 1] % m;
			}
		}
	}
    return a[k][n];
}
signed main() {
    fast;
    cin >> k >> n >> m;
    cout<<C(k, n , m) % m;
}
