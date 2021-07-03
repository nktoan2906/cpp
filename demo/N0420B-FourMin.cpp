#include <iostream>
#include <math.h> 
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll a[n], b[n];
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == b[0]) cout<<i<<" ";
		if (a[i] == b[1]) cout<<i<<" ";
		if (a[i] == b[2]) cout<<i<<" ";
		if (a[i] == b[3]) cout<<i<<" ";
	}
}