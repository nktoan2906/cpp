#include <iostream>
#include <map>
#define lli unsigned long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
lli n, k, a[1000001];
map<lli, lli> dem;
int main() {
	FASTER;
	cin >> n >> k;
	for (lli i = 1; i <= n; i++) {
		cin >> a[i];
		dem[a[i]]++;
	}
	lli t = 1;		
	for (auto it : dem) {
		if (it.second >= k){
			t = 0;
			cout << it.first << ' ';
		}
	}
	if (t == 1) cout << -1;
}