#include <iostream>
using namespace std;
#define MAX 100
int n, k, a[MAX], vecto[MAX];
void CIN() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) vecto[i] = 1;
}
void COUT() {
    for (int i = 1; i <= k; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}
void ListChinHopKoLap(int i) {
    for (int j = 1; j <= n; ++j) {
        if (vecto[j]) {
            a[i] = j;
            if (i == k) COUT();
            else {
                vecto[j] = 0;
                ListChinHopKoLap(i + 1);
                vecto[j] = 1;
            }
        }
    }
}
int main() {
    CIN();
    ListChinHopKoLap(1);
}
    