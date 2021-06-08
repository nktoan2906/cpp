#include <iostream>
#define FOR3(i,n) for (int i = 3; i <= n; ++i)
#define a1a2_1 a[1] = 1; a[2] = 1;
using namespace std;
const int N = 1e6;
const int mod = 1e9 + 7;
long long n, a[N];
int main() {
	a1a2_1;
	cin >> n;
	FOR3(i,n){
		a[i] = ((a[i - 1]%mod) + (a[i - 2]%mod)) % mod;
	}
	cout << a[n];
	return 0;
}