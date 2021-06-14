#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ll n,dem = 0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    cout<<a[n - 1] - a[0];
    return 0;
}
    