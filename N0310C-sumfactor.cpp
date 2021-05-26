//http://laptrinhphothong.vn/Problem/Details/4580
#include <iostream>
using namespace std;
unsigned long long n,s,f;
int main() {
	cin >> n;
    f = 1;
	s = 0;
	long long mod = 1e9 + 7;
	for(long long i = 1;i<=n;i++){
		f = (f*i) % mod;
		s = (s+f) % mod;
	}
	cout<<s;
}
