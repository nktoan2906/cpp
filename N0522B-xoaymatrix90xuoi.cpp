#include <iostream>
#define FOR1(i,n) for (int i = 0; i < n; ++i)
#define FOR(j,n) for (int j = 0; j < n; ++j)
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    FOR1(i,n) {
        FOR(j,n) cin >> a[i][j];
    }
    FOR1(i,n) {
        int k = n - 1;
        FOR(j,n)  {
            b[i][j] = a[k][i];
            k--;
        }
    }
    FOR1(i,n) {
        FOR(j,n)  {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}