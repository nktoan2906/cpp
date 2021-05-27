#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
using namespace std;
ll max1 = 0, max2 = 0;
int main() {
    ll n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        ll a;
        cin >> a; //  nhập mảng 
        a = abs(a); 
        if (a > max1) {
            max1 = a; // nếu max1 < a thì gán bằng 1 
            max2 = max1; // 
        }
        else max2 = max(max2, a); 
    }
    cout << max1 * max1 + max2 * max2;
}