#include <iostream>
#include <math.h>
#define FOR(i, n) for (int i = 2; i <= sqrt(n); i++)
#define FOR1(i, n) for (int i = 1; i <= n; i++)
#define nmodi n % i == 0
using namespace std;
#define FASTER ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
bool SNT(int n) {
	if (n < 2) return 0;
	if (n == 2) return 1;
	FOR(i, n) {
		if (nmodi) return 0;
	}
	return 1;
}
bool GCD(long long n) {
	long long cann = sqrt(n);
	if (cann * cann == n && SNT(cann)) return 1;
	else return 0;
}
long long n, a[1000005];
int main() {
	FASTER;
	cin >> n;
	FOR1(i, n) cin >> a[i];
	FOR1(i, n) {
		if (GCD(a[i])) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}