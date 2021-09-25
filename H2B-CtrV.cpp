#include <iostream>
#define lli long long int
using namespace std;
int main() {
    lli a[1000001], n, x, k;
    cin >> n >> k >> x;
    for (lli i = 1; i <= n; i++) cin >> a[i]; 
    for(lli i = 1; i <= n; i++) {
        if(i == k) cout << x << " " << a[i] << " ";
        else cout << a[i] << " ";

    }
}