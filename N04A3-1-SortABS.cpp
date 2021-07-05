#include<iostream>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FOR(i,n) for(int i=1;i<=n;i++)
int n,a[1000005];
int main() {
    faster;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>=1;i--) cout<<a[i]<<' ' ;
}