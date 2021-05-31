#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
const int N = 1e6;
ll a[N],n,dem = 0;
int main()
{
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    cout<<a[n] - a[1];
    return 0;
}
    