#include <iostream>
#define RUNK for (int i = 1; i <= k + 1; i++)
#define RUNKN for (int i = k + 2; i <= n + 2 + k - 1; i++)
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int F[n + 2 + k];
	RUNK F[i] = 1;
	RUNKN {
		F[i] = (F[i - 1] + F[i - 1 - k]) % 1000000;
	}
	cout << F[n + 2 + k - 1];
	return 0;
}
