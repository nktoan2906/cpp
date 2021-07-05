#include <iostream>
#include <algorithm>
using namespace std;
int result = 1000000005;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; cin >> a[i++]);
    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n; i++){
        result = min(result, a[i] - a[i - 1]);
    }
    cout << result;
    return 0;
}
