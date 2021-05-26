#include <iostream>
#define ll long long
using namespace std;
ll souoc(ll n){
    ll dem = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0) dem++;
    }
    return dem;
}
int main() {
    ll n,a[101],dem = 0,p[101];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) p[i]=souoc(a[i]);
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if((p[i] + p[j]) % 7 == 0) dem++;
        }
    }
    cout<< dem;
    return 0;
}
    