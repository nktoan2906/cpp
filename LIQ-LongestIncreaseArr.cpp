#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, a[10003], F[10003];
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	a[0] = 0;
	F[0] = 0;
	for (int i = 1; i <= n; i++) {
		F[i] = 1;
		for (int j = i - 1; j >= 1; j--) {
			if (a[i] > a[j]) F[i] = max(F[i], F[j] + 1);
		}
	}
	long length = 1;
	for (int i = 1; i <= n; i++) {
		if (F[i] >= length) length = F[i];
	}
	cout << length;
	return 0;
}
