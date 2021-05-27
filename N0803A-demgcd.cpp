#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    ll n,a[101],dem = 0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(__gcd(a[i],a[j]) > 1) dem++;
        }
    }
    cout<<dem;
    return 0;
}
