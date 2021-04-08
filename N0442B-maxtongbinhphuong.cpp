//http://laptrinhphothong.vn/Problem/Details/5922
#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    ll N = 1e6;
    ll n,a[N];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    cout<<a[n]*a[n] + a[n-1]*a[n-1];
}