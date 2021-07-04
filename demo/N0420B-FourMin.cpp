#include <iostream>
#include <algorithm> 
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll a[n], b[n];
	for (ll i = 1; i <= n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1, b + n + 1);
	for (int i = 1; i <= n; ++i) {
		if (a[i] == b[1]) cout<<i<<" ";
		if (a[i] == b[2]) cout<<i<<" ";
		if (a[i] == b[3]) cout<<i<<" ";
		if (a[i] == b[4]) cout<<i<<" ";
	}
}
