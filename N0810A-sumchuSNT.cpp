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
    ll sum = 0;
    string s;
    cin>>s;
    for(int i=0;i< s.size();i++){
        ll x = s[i] - 48;
        sum += x;
    }
    if(SNT(sum) == true) cout<<"YES";
    else cout<<"NO";
}