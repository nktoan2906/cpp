#include <iostream>
#define f1(i, n) for(int i = 1; i <= n; ++i)
using namespace std;
long long int h1, m1, h2, m2, ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> h1 >> m1 >> h2 >> m2;
    long long int l = h1 * 60 + m1;
    long long int r = h2 * 60 + m2;
    for(int i = l; i <= r; ++i) {
        int h = i / 60, m = i % 60;
        if(m == 30) ++ans;
        if(m == 0) {
            h %= 12;
            if(h == 0) h = 12;
            ans += h; 
        }
    }
    cout << ans;
}