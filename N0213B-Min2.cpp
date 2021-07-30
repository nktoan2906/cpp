#include <iostream>
#include <algorithm>
using namespace std;
int a[5];
int main()
{
	for (int i = 0; i < 5; i++){
		cin >> a[i];
	}
	sort(a, a + 5);
	cout << a[1];
}