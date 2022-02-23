#include<bits/stdc++.h>
using namespace std;
int n, a[100005], result = 1000000005;
int main() {
	cin >> n;
	for(int i = 1; i <= n; cin >> a[i++]);
	sort(a + 1, a + n + 1);
	for(int i = 2; i <= n; i++) result = min(result, a[i] - a[i - 1]);
	cout << result;
	return 0;
}
    