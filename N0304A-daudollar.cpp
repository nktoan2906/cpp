#include <iostream>
#define FOR(i,n) for (int i = 1; i <= n; ++i) 
#define FOR(j,n) for (int j = 1; j <= n; ++j) 
using namespace std;
int main() {
    int n;
    cin >> n;
    FOR(i,n){
        FOR(j,n) {
            cout << "$"; //luu y,co mot khoang trong o day
        }
        cout << "\n";
    }
    return 0;
}
