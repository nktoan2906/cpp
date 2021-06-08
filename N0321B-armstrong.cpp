#include <iostream>
#include <stdio.h>
#include <math.h>
#define FOR(i,SoChuSo) for(int i = 1; i <= SoChuSo ; ++i)
using namespace std;
int main() {
    int n;
    while(cin >> n) {
        int S = 0,SoChuSo = 0,p = n,q = n;
        while(n>0) {
            n /= 10;
            SoChuSo += 1;
        }
        FOR(i,SoChuSo) {
            int m = p % 10;
            p /= 10;
            S += pow(m, SoChuSo);
        }
        if (S == q) cout << "YES" ;
        else cout << "NO" ;
    }
    return 0;
}
    