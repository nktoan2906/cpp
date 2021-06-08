#include <iostream>
#define FOR2CAN(i,n) for (int i = 2; i * i <= n; ++i) 
#define nmodi n % i == 0
#define FOR(a,b) for(int i = a; i <= b; ++i)
using namespace std;
bool CheckSNT(int n) {
	FOR2CAN(i,n){
		if (nmodi) return false;
	}
	return n > 1;
}
int dem = 0;
int main() {
	int i, a, b;
	cin >> a >> b;
	FOR(a,b) {
		if (CheckSNT(i)) {
			cout << i;
			dem++;
		}
	}
	if (dem == 0) cout << -1;
	return 0;
}