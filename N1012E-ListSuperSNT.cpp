#include <iostream>
#include <math.h>
#define RUN(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
using namespace std;
ll SNT(ll n) {
    RUN(i, 2, sqrt(n)) if (n % i == 0) return false;
    return true;
}
ll n, a[105], b[105], c[105], t = 4, k = 0;
int main() {
    cin >> n;
    a[1] = 2, a[2] = 3, a[3] = 5, a[4] = 7;
    b[1] = 1, b[2] = 3, b[3] = 7, b[4] = 9;
    n--;
    while (n--) {
        RUN(i, 1, t) {
            RUN(j, 1, 4) if (SNT(a[i] * 10 + b[j]))
            c[++k] = a[i] * 10 + b[j];
        }
        RUN(i, 1, k) {
            a[i] = c[i];
        }
        t = k;
        k = 0;
    }
    cout << t;
}