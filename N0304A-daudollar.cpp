#include <iostream>
#define FOR(i,n) for (i = 1; i <= n; ++i) 
#define FOR(j,n) for (j = 1; j <= n; ++j) 
using namespace std;
int main() {
    int n, i, j;
    cin >> n;
    FOR(i,n){
        FOR(j,n) {
            cout << "$"; //luu y,co mot khoang trong o day
        }
        cout << "\n";
    }
    return 0;
}
