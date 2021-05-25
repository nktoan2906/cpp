#include<iostream>
using namespace std;
long long kq(long long n){
    return 5*n*n*n + 3*n*n + 4*n - 11;
}
int main(){
    int n,a[1001];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cout<<kq(a[i])<<endl;
    return 0;
}
    