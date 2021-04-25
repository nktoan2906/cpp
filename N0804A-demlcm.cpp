#include<iostream>
#include <math.h>
#include <algorithm>
#define int long long
#define lcm(a, b) a * b / __gcd(a, b)
using namespace std;
const int N = 1e2 + 3;
int a[N],dem;
signed main() {
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i < n; ++i) {
		for(int j = i + 1; j <= n; j++){
            if(lcm(a[i], a[j]) <= k && lcm(a[i], a[j]) > 0) ++dem;
		}
	}
    cout << dem;
    return 0;
}   