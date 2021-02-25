//http://laptrinhphothong.vn/Problem/Details/4598
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
long long n;
int a[1000000+1];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int dem=0;
    for (int i = 0; i < n; i++){
       if(a[i] >=500 && a[i] <= 3000) dem++;
    }
    cout<<dem;
    return 0;
}
    