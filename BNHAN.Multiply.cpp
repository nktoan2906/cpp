#include <bits/stdc++.h>
using namespace std;
long long n, m, k, a[1000005],inhanj= 0;
int main()
{
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            inhanj++;
            a[inhanj] = i * j;
        }
    }
    sort(a+1,a+inhanj+1);
    cout << a[k];
}
    