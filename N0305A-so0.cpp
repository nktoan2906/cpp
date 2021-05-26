//http://laptrinhphothong.vn/Problem/Details/4575
#include <iostream>
using namespace std;
long long n;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
    