#include <iostream>
#define ulli unsigned long long int
using namespace std;
ulli GCD (ulli a,ulli b) {
    ulli temp;
    while (b > 0) {
        a %= b;
        temp = a;
        a = b;
        b = temp;
    }
    return a;
}
int main () {
    ulli a,b,c,tg;
    cin>>a>>b>>c;
    tg = GCD (a,b);
    cout<< GCD(tg,c);
    return 0;
}
    