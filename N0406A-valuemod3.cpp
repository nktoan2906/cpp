//http://laptrinhphothong.vn/Problem/Details/4595
#include <bits/stdc++.h>
using namespace std;
long long n,s;
int a[1000000+1];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int dem=0;
    for (int i = 0; i < n; i++){
        if (a[i]%3==0) dem++;
    }
    cout<<dem;
    return 0;
}
    