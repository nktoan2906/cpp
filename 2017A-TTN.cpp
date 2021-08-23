#include <iostream>
#define f1(i, n) for(int i = 1; i <= n; ++i)
using namespace std;
long long int n, ans;
char a[1003];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    f1(i, n) cin >> a[i];
    f1(i, n - 1) ans += a[i] ==a[i + 1];
    cout << ans;
    return 0;
}