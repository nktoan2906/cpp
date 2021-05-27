#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll N = 1e6;
    int n,a[N],dem;
    cin>>n;
    for(int i=1 ; i<=n; i++) cin>>a[i];
    int t = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] % 3 == 0) {
            t = i;
            for (int j = t; j < n; j++) {
                a[j] = a[j + 1];
            }
            i--;
            n--;
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}