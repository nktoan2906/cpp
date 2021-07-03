#include <iostream>
#include <algorithm> 
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll a[n], b[n];
	for (ll i = 1; i <= n; ++i) cin >> a[i];
	for (ll i = 1; i <= n; ++i) b[i] = abs(a[i]);
	sort(b + 1, b + n + 1);
	for (ll i = 1; i <= n; ++i) cout << b[i] << " ";
}
