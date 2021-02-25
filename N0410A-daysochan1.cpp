//http://laptrinhphothong.vn/Problem/Details/5809
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    long long n,dem=0;
    long long a[10000+1];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        if(a[i]%2==0) dem++;
    }
    cout<<dem;
    return 0;
}
    