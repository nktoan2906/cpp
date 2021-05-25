#include <iostream>
using namespace std;
int main()
{
    int m, n, a[101][101];
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> a[i][j];
    }
    int max = a[0][0];
    int min = a[0][0];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] > max) max = a[i][j];
            else if (a[i][j] < min) min = a[i][j];
        }
    }
    cout << min <<endl<< max;
    return 0;
}