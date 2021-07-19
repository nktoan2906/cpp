#include <iostream>
#include <algorithm>
#define NEWRUN for (int i = 1; i <= n; cin >> a[i++]);
#define RUN2 for (int i = 2; i <= n; i++)
using namespace std;
int result = 1000000005;
int main()
{
    int n;
    cin >> n;
    int a[n];
    NEWRUN;
    sort(a + 1, a + n + 1);
    RUN2{
        result = min(result, a[i] - a[i - 1]);
    }
    cout << result;
    return 0;
}
