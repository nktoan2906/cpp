#include <iostream>
#define FOR(i,n) for(int i = 1; i <= n; ++i)
#define ll long long
using namespace std;
const int N = 1e9 + 7;
int main() {
    ll n,kq;
    cin>>n;
    ll t=1;
    FOR(i,n){
        t *= i%N;
        kq = t%N;
    }
    cout<<kq;
    return 0;
}
    