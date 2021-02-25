//http://laptrinhphothong.vn/Problem/Details/4597
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
long long n,k;
int a[1000000+1];
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    int dem=0;
    for (int i = 0; i < n; i++){
       if(a[i] >= k) dem++;
    }
    cout<<dem;
    return 0;
}
    