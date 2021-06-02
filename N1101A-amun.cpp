#include <iostream>
using namespace std;
const int N = 1e9 + 7;
long long Mu(long long a, long long b) {
    if (b == 0) return 1;
    long long t = Mu(a, b / 2);
    t = (t * t) % N;
    if (b % 2 == 1) t = (t * a) % N;
    return t;
}
int main() {
    long long m = 2, n;
    cin >> n;
    cout << (long long)Mu(m, n) % N;
}
