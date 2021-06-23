#include <iostream>
#include <math.h>
#define FOR(i, cann) for (int i = 1; i <= trunc(sqrt(n)); i++)
using namespace std;
int n, s = 0;
int main() {
    cin >> n;
    FOR(i, cann) {
        if (n % i == 0) s += i + n / i;
    }
    if (s == 2 * n) cout << "YES";
    else cout << "NO";
    return 0;
}
