#include <bits/stdc++.h>
using namespace std;
int n, a[121], s;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(s <= a[i]) ++s;
    }
    cout << s;
    return 0;
}
    