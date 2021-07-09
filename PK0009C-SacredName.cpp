#include <iostream>
#include <map>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define ll long long
string s, a[1000005];
map <string, ll> b;
ll dem = 0, res = 0;
int main() {
	FASTER;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		for (int j = i; j < s.length(); ++j) {
			++dem;
			a[dem] = s.substr(i, j - i + 1);
		}
	}
	for (int i = 1; i <= dem; ++i) {
		if (a[i] != " ") ++b[a[i]];
	}
	for (int i = 1; i <= dem; ++i) {
		if (b[a[i]] > 0) {
			++res;
			b[a[i]] = 0;
		}
	}
	cout << res - 1;
}