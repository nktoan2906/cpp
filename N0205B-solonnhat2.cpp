//http://laptrinhphothong.vn/Problem/Details/5599
#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d, max;
    cin >> a >> b >> c >> d;
    max = a;
    if (max < a)
    {
        max = a;
    }

    if (max < b)
    {
        max = b;
    }

    if (max < c)
    {
        max = c;
    }

    if (max < d)
    {
        max = d;
    }

    cout << max;
    return 0;
}
    