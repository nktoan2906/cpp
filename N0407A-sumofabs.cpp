//http://laptrinhphothong.vn/Problem/Details/4596
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
long long n,s;
int a[1000000+1];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int s=0;
    for (int i = 0; i < n; i++){
       s=s+abs(a[i]);
    }
    cout<<s;
    return 0;
}
    