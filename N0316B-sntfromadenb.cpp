//http://laptrinhphothong.vn/Problem/Details/5762
#include <iostream>
using namespace std;
bool kiemtra(long long n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return n > 1;
}
int dem = 0;
int main()
{
	int i, a, b;
	cin >> a >> b;
	for (i = a; i <= b; i++)
	{
		if (kiemtra(i))
		{
			cout << i;
			dem++;
		}
	}
	if (dem == 0)
	{
		cout << -1;
	}
	return 0;
}