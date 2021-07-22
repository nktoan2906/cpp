#include <iostream>
#include <math.h>
#define RUNSQRT for (int i = 1; i <= trunc(sqrt(n)); ++i)
#define nmodi n % i == 0
using namespace std;
int n, s = 0;
int main() {
    cin >> n;
    RUNSQRT {
        if (nmodi) s += i + n / i;
    }
    if (s == 2 * n) cout << "YES";
    else cout << "NO";
    return 0;
}
