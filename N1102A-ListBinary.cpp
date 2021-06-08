#include <iostream>
#define FOR(i,n) for (i = 0; i < n; i++) 
#define FORBACH(n,i) for (i = n - 1; i >= 0; i--)
#define FORJ(j,i,n) for (int j = i + 1; j < n; j++)
#define FOR(j,n) for (int j = 0; j < n; j++)
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n], i;
	FOR(i,n) a[i] = 0;
	FOR(i,n) {
		cout << a[i];
	}
	cout << "\n";
	//xu ly
	FORBACH(n,i){
		if (a[i] == 0) { // neu gap phan tu 0 dau tien 
			a[i] = 1; // gan no lai thanh 1
			FORJ(j,i,n)  a[j] = 0; // gan toan bo phan tu phia sau no thanh 0
			FOR(j,n) { // in ra day so moi
				cout<<a[j];
			}
			cout<<"\n";
			i = n; // gan i = n de khi het vong lap i-- nen i se = n - 1, tu do chay lai tu vi tri cuoi.
				   // gan i = n - 1 la sai vi khi het vong lap hien tai i-- se thanh n - 2.
		}
	}
	return 0;
}