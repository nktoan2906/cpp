#include <iostream>
#define FOR(i,n) for(int i = 1; i <= n; ++i)
#define FOR(j,i) for(int j = 1; j <= i; ++j)
#define ll long long 
using namespace std;
ll n;
int main() {
    cin >> n;
    FOR(i,n) {
        FOR(j,i){
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
    