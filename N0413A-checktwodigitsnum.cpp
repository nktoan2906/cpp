#include <iostream>
#define FOR(i,n) for(int i = 1; i <= n; i++)
#define ll long long
using namespace std;
ll a[1000001],dem = 0;
ll n;
int main() {
    cin >> n;
    FOR(i,n)  cin >> a[i];
    FOR(i,n) {
        if((a[i] >= 10) && (a[i] <= 99)) dem++;
    }
    cout<<dem;
}
    