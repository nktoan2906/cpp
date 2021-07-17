#include <iostream>
using namespace std;
#define MAX 100
int n, k, a[MAX], x[MAX];
void Init() {
    cin >> k >> n;
    for (int i = 1; i <= n; ++i) x[i] = 1;
}
void COUT() {
    for (int i = 1; i <= k; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}
void ListChinHop(int i) {
    for (int j = 1; j <= n; ++j) {
        if (x[j]) {
            a[i] = j;
            if (i == k) COUT();
            else {
                x[j] = 0;
                ListChinHop(i + 1);
                x[j] = 1;
            }
        }
    }
}
int main() {
    Init();
    ListChinHop(1);
}
