#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
ll a[1000001],dem = 0;
ll n;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        if((a[i] >= 10) && (a[i] <= 99)) dem++;
    }
    cout<<dem;
}
    