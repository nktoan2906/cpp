#include <iostream>
using namespace std;
#define ll long long
int main() {
	ll n, x;
	cin >> n >> x;
	ll a[n];
	for (ll i = 1; i <= n; i++) cin >> a[i];
	for (ll i = 1; i <= n; i++){
		if (a[i] == x) {
			cout << "Y";
			return 0;
		};
	}
	cout << "N";
}
