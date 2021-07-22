#include <iostream>
#include <math.h>
#include <algorithm>
#define ulli unsigned long long int
#define SWAP(a, b, temp) temp = a; a = b; b = temp;
using namespace std; 
int main() {
    ulli a, b, c, tg;
    cin >> a >> b >> c;
    cout << __gcd(__gcd(a, b), c);
    return 0;
}
