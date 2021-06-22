#include <iostream>
#define ulli unsigned long long int
#define SWAP(a,b,temp) temp = a; a = b; b = temp;
using namespace std;
ulli GCD (ulli a,ulli b) {
    ulli temp;
    while (b > 0) {
        a %= b;
        SWAP(a,b,temp);
    }
    return a;
}
int main () {
    ulli a,b,c,tg;
    cin>>a>>b>>c;
    cout<< GCD(GCD(a,b),c);
    return 0;
}
    