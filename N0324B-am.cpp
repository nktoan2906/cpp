#include <iostream>
using namespace std;
int main()
{
	long long n, dem = 0;
	cin >> n;
	long long a[1000007];
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		if (a[i] <= 0)
		{
			cout << a[i - 1];
			dem++;
			break;
		}
	}
	if (dem == 0) cout << 0;
	return 0;
}