//http://laptrinhphothong.vn/Problem/Details/4645
#include <iostream>
#include <math.h>
using namespace std;
bool is_prime(int n)
{
    bool kt = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            kt = false;
            break;
        }
    }
    return kt;
}
int main()
{
    int n,x = 0;
    cin >> n;
    n++;
    while (x == 0) {
        if (is_prime(n)) x = n;
        else n++;
    }
    cout << x;
}
