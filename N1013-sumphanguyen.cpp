#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
ll int sum(ll int n) {
    ll int root = sqrt(n);
    ll int s = 0; 
    for (int i = 1; i <= root; i++) {
        s += n / i;
    }
    s = 2 * s - (root * root);
    return s;
}
int main() {
    ll int n ;
    cin>>n;
    cout << sum(n);
    return 0;
}