#include <iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	if (a * a < b * b){
		swap(a, b);
	}
	cout << a;	
}