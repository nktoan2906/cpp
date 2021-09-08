#include <iostream>
using namespace std;
int main() {
    long long int n, truyvan, x; 
    cin >> n;
    long long int a[n + 1];
    for (int i = 1; i <= n; ++i) cin >> a[i];
    cin >> truyvan;
    for (int j = 1; j <= truyvan; ++j) {
        cin >> x;
        int left = 1, right = n, m, vt = 0;
        while (left <= right) {
            m = (left + right) / 2;
            if (a[m] == x) {
                vt = m;
                break;
            }
            if (a[m] < x) left = m + 1;
            else right = m - 1;
        }
        cout << vt << endl;
    }
}
