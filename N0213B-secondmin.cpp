#include <iostream>
#define sui short unsigned int
using namespace std;
int main() {
	int a, b, min, runner;
	cin>>a>>b;
	if (a < b) {
		a += b;
		b = a - b;
		a -= b;
	}
	min = a;
	for (sui i = 0; i < 3; i++) {
		cin>>runner;
		if (runner < b) {
			min = b;
			b = runner;
		}
		if (runner > b && runner < min) min = runner;
	}
	cout<<min;
	return 0;
}
