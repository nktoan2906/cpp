#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, t, q;
	cin >> n >> t;
	while (t--) {
		cin >> q;
		int tg = sqrt(q);
		if (tg * tg + 1 < q){
			tg++;
		}
		cout << tg * tg + 1 << endl;
	}
}
