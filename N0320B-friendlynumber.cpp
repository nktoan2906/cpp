#include <iostream>
#define ll long long 
#define FOR(i,a) for(int i=1; i<a; i++)
#define FOR(i,b) for(int i=1; i<b; i++)
#define amodi a % i == 0
#define bmodi b % i == 0
using namespace std;
ll a,b,s,s1;
int main() {
    cin>>a>>b;
    FOR(i,a){
        if(amodi) s+=i;
    }
    FOR(i,b) {
        if(bmodi) s1+=i;
    }
    if((s==b)&&(s1==a)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
    