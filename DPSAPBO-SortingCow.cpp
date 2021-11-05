#include <iostream>
#define RUN(i, a, b) for (int i = a; i <= b; ++i) 
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int F[n + 2 + k];
	RUN(i, 1, k + 1) F[i] = 1;
	RUN(i, k + 2, n + 2 + k - 1) {
		F[i] = (F[i - 1] + F[i - 1 - k]) % 1000000;
	}
	cout << F[n + 2 + k - 1];
	return 0;
}
//