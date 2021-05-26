//http://laptrinhphothong.vn/Problem/Details/5883
#include <iostream>
using namespace std;
long long a, b, x;
int main() {
    cin >> a >> b >> x;
    long long dem = (b / x) - (a / x);
    if (a % x == 0) {
        dem++;
    }
    cout << dem;
    return 0;
}
