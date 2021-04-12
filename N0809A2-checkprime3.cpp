#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
bool SNT(int n){
    if(n < 2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ll n;
    cin>>n;
    if(SNT(n) == true) cout<<"YES";
    else cout<<"NO";
}