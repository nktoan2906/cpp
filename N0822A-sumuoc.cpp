#include <iostream>
#include <cmath>
using namespace std;
int main() {
	unsigned long long n;
	unsigned long long s = 0;
	cin >> n;
	for (unsigned long long i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			unsigned long long j = n/i;
			if (i == j) s = s + i;
		    else s = s + i + j;
		}
	}
	cout<< (s);
	return 0;
}