//http://laptrinhphothong.vn/Problem/Details/4579
#include <iostream>
using namespace std;
const long long mod = 1e9 + 7;
long long a[1000002],n;
int main()
{
    cin>>n;
    a[1] = a[2] = 1;
    for( long long i=3; i<=n; ++i)
    {
        a[i] = ((3*a[i-1] % mod ) - (a[i-2] % mod)) % mod;
        if (a[i] < 0) a[i] = 1e9 + 7 - a[i] * -1;
    }
    cout<<a[n];
    return 0;
}
    