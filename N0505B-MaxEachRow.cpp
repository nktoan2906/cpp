#include <bits/stdc++.h>
#define ll long long
#define FOR1(i,k) for (i = 0; i < k; i++)
#define FOR(i,k,n) for (i = 0; i < k; i = i + n)
using namespace std;
int main() {
	ll m, n, i, t;
	cin >> m >> n;
	vector<ll> a;
	ll k = m * n;
	FOR1(i,k){
		cin >> t;
		a.push_back(t);
	}
	FOR(i,k,n){
		vector<ll>::iterator c = max_element(a.begin() + i, a.begin() + i + n);
		cout << *c << endl;
	}
}