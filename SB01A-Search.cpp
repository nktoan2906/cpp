#include <iostream>
#define FOR(i,n) for (ll i = 1; i <= n; i++)
using namespace std;
#define ll long long
int main() {
	ll n, x;
	cin >> n >> x;
	ll a[n];
	FOR(i,n) cin >> a[i];
	FOR(i,n) {
		if (a[i] == x) {
			cout << "Y";
			return 0;
		};
	}
	cout << "N";
}
