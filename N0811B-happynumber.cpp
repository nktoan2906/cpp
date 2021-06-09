#include <iostream>
#define ll long long
#define ull unsigned long long
#define happynumchan happynum % 2 == 0
#define FOR(a,b) for (ll i = a; i <= b; ++i) 
ull a, b, dem, happynum, chusocuan;
using namespace std;
int main() {
    cin >> a >> b;
    FOR(a,b){
        chusocuan = i;
        happynum = 0;
        while (chusocuan != 0) {
            happynum += ((chusocuan % 10) * (chusocuan % 10));
            chusocuan /= 10;
        }
        if (happynumchan) dem++;
    }
    cout<<dem;
}