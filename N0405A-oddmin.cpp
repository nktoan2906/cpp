//http://laptrinhphothong.vn/Problem/Details/4594
#include <iostream>
using namespace std;
int main() {
	long long n, a, min, max;
	cin >> n;
	min = -1;
	bool minInit = false;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 != 0) {
			if (!minInit || a < min) {
				minInit = true;
				min = a;
			}
		}
	}
	cout << min;
	return 0;
}