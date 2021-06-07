#include <iostream>
#define FOR(i,n) for (int i = 1; i <= n; i++)
#define ilauocn (n % i == 0)
#define ichan  (i % 2 == 1)
using namespace std;
int main() {
	int n, max = 0;
    cin>>n;
    FOR(i,n) {
		if (ilauocn && ichan) {
			if (i > max) max = i;
		}
	}
	cout<<max;
}