//http://laptrinhphothong.vn/Problem/Details/4584
#include <iostream>
using namespace std;

int main()
{
    long long n, s = 0;
    long long mod = 1e9 + 7;

    cin >> n;
    for(long long i(1); i <= n; i++){
        s = (s + i * i * i) % mod;
    }
    cout << s;
    return 0;
}
