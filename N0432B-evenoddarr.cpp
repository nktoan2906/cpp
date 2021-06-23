#include <iostream>
#define FOR(i,n) for (long long i = 1; i <= n; ++i)
#define aichan a[i] % 2 == 0
#define aile a[i] % 2 != 0
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long a[n];
    FOR(i,n) cin >> a[i];
    FOR(i,n) {
        if (aichan) cout << a[i] << " ";
    }
    FOR(i,n) {
        if (aile) cout << a[i] << " ";
    }
    return 0;
}
