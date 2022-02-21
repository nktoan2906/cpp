#include <bits/stdc++.h>
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
const long long MAX = 1000001;
vector<long long> a;
long long x, b[MAX], m, n;
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n;
    RUN(i, 1, m){
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    RUN(i, 1, n){
        cin >> b[i];
        long long c = upper_bound(a.begin(), a.end(), b[i]) - a.begin() - 1;
        if (a[c] <= b[i]){
            cout << a[c];
            a.erase(a.begin() + c);
        }
        else {
            cout << -1;
        }
        cout << "\n";
    }
}
    