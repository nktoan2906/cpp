//http://laptrinhphothong.vn/Problem/Details/5676/?contestid=301
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n < 2)
    {
        cout << "NO";
        return 0;
    }
    long long dem = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) dem++;
    }
    if (dem == 0) cout << "YES";
    else cout << "NO";
    return 0;
}