//http://laptrinhphothong.vn/Problem/Details/5888
#include <iostream>
using namespace std;
bool Check(int n) {
    return n % 11 == 0 && n < 100 && n >= 10;
}
int main() {
    long long n;
    cin >> n;
    if (Check(n)) cout << "YES";
    else cout << "NO";
}
