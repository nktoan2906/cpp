#include <iostream>
#define ll long long
#define FOR(i,n) for (int i = 0; i < n; ++i)
#define FOR1(j,t,n) for (int j = t; j < n; ++j)
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    FOR(i,n) cin>>a[i];
    int t = 0;
    FOR(i,n) {
        if (a[i] % 3 == 0) {
            t = i;
            FOR1(j,t,n) {
                a[j] = a[j + 1];
            }
            --i;
            --n;
        }
    }
    FOR(i,n) cout<<a[i]<<" ";
}