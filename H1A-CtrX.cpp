#include <iostream>
using namespace std;
int main() {
    long long int  a[1000001];
    long long int n, k;
    cin >> n >> k;
    for (long long int i = 1; i <= n; i++) cin >> a[i]; 
    for (long long int i = 1; i <= n; i++) {
        if(i != k) cout << a[i] << " ";
    }
}
