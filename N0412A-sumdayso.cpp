//http://laptrinhphothong.vn/Problem/Details/5811
#include <bits/stdc++.h>
using namespace std;
long long n,s = 0;
int a[10001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        if(a[i]%2==0 && a[i]%3==0) s+=a[i];
    }
    cout<<s;
    return 0;
}
    