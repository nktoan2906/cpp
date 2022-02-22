#include <bits/stdc++.h>
using namespace std;
long long n, res = 0, a[101];
int main() {
    cin >> n;
    for(int i = 0; i < n; cin >> a[i++]);
    sort(a, a + n, greater<int>());
    for(int i = 0; i < n; ++i) {
        if(a[i] >= i) res += a[i] - i;
	}
    cout << res;
    return 0;
}
    