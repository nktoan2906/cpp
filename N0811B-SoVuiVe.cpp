#include <iostream>
#define ll long long
#define ulli unsigned long long int
#define happynumchan happynum % 2 == 0
#define FOR(a,b) for (ulli i = a; i <= b; ++i) 
ulli a, b, dem, happynum, chusocuan;
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
        if (happynumchan) ++dem;
    }
    cout<<dem;
}