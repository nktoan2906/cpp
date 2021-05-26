#include <iostream>
using namespace std;
const int N = 1e6;
const long long MOD = 1e9 + 7;
long long n, a[N];
int main() {
	a[1] = 1;
	a[2] = 1;
	cin >> n;
	for (int i = 3; i <= n; ++i){
		a[i - 1] %= MOD;
		a[i - 2] %= MOD;
		a[i] = (a[i - 1] + a[i - 2]) % MOD;
	}
	cout << a[n];
	return 0;
}