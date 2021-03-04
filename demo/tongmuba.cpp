#include <iostream>
using namespace std;

int main()
{
    long long n, tong = 0;
    long long mod = 1e9 + 7;

    cin >> n;
    for(long long i(1); i <= n; i++){
        tong = (tong + i * i * i) % mod;
    }
    cout << tong;
    return 0;
}
