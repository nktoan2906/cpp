#include <iostream>
using namespace std;
long int n,m,a[100001];
void CIN() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
}
void CheckHaiVachSon() {
	int i = 1,j = 0,res = 0;
	while (i < n) {
		if (a[i] - a[j] < m) ++i;
		if (a[i] - a[j] > m) ++j;
		if (a[i] - a[j] == m) {
			cout << a[j] << " " << a[i];
			res = 1;
			break;
		}
	}
	if (res == 0) cout << -1;
}
int main() {
	CIN();
	CheckHaiVachSon();
	return 0;
}