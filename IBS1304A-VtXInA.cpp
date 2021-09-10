#include <iostream>
#include <map>
using namespace std;
int main() {
    long long n, ntruyvan, truyvan; 
    cin >> n;
    long long int a[n + 1];
    map<long long, long long> vt;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        vt[a[i]] = i;
    }
    cin >> ntruyvan;
    for (int j = 1; j <= ntruyvan; ++j) {
        cin >> truyvan;
        cout << vt[truyvan] << '\n';
    }
}
    