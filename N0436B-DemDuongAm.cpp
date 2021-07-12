#include <iostream>
#include <map>
#define lli long long int
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
lli n, a[1000001];
int main() {
	FASTER;
	cin >> n;
	for (lli i = 1; i <= n; i++) cin >> a[i];
	lli CountDuong = 0, CountAm = 0;
	for(lli i = 1; i <= n; ++i){
		if(a[i] > 0) ++CountDuong;
	}
	for(lli i = 1; i <= n; ++i){
		if(a[i] < 0) ++CountAm;
	}
    cout << CountDuong * CountAm;
}