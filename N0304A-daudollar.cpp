//http://laptrinhphothong.vn/Problem/Details/4574
#include <iostream>
using namespace std;
int main() {
    int a, i, j;
    cin >> a;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= a; j++) {
            cout << "$"; //luu y,co mot khoang trong o day
        }
        cout << "\n";
    }
    return 0;
}
