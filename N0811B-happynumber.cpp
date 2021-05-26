#include <iostream>
#define ll long long
#define ull unsigned long long
ull a, b, dem, happynum, chusocuan;
using namespace std;
int main() {
    cin >> a >> b;
    for (long long i = a; i <= b; i++) {
        chusocuan = i;
        happynum = 0;
        while (chusocuan != 0) {
            happynum += ((chusocuan % 10) * (chusocuan % 10));
            chusocuan /= 10;
        }
        if (happynum % 2 == 0) dem++;
    }
    cout<<dem;
}