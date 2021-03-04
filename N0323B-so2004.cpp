#include <iostream>
#include <math.h>
using namespace std;
const int N = 1e5;
int a[N];
int main()
{
    int x;
    int dem = 0;
    while (cin >> x)
    {
        if (x == 2004)
        {
            dem++;
            cout << 2004;
            break;
        }
    }
    if (dem == 0) cout << -1;
}