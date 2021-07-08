#include <iostream>
#define ulli unsigned long long int
using namespace std;
int main() {
    ulli a,b;
	cin>>a>>b;
	ulli form = (a + b) * (b - a + 1) / 2;
	cout<<form;
}
