#include <iostream>
#define ll long long
#define bkhac0 (b!=0) 
#define amodb (a % b == 0)
using namespace std;
ll a,b;
int main() {
    cin >> a >> b;
    if(bkhac0){
        if(amodb) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"-1";
    return 0;
}
    