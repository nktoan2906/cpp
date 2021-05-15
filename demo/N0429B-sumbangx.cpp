#include <iostream>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;
    int a[101];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int dem = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (a[i] + a[j] == x)
                dem++;
        }
    }
    cout << dem;
}