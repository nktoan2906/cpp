#include <iostream>
#define sui short unsigned int
#define RUNO3() for (sui i = 0; i < 3; i++) 
using namespace std;
int main() {
	int a, b, min2, cde;
	cin>>a>>b;
	if (a < b) {
		a += b;
		b = a - b;
		a -= b;
	}
	min2 = a;
	RUNO3(){
		cin>>cde;
		if (cde < b) {
			min2 = b;
			b = cde;
		}
		if (cde > b && cde < min2) min2 = cde;
	}
	cout<<min2;
	return 0;
}
