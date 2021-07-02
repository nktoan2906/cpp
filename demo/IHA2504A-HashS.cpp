#include <iostream>
using namespace std;
int main() {
	string s;
	long long MOD,H = 1;
	long long n = s.size();
	cin>>s>>MOD;
	for(int i=1;i<=n;++i) {
		H = (H * 31 + (s[i] - 'a' + 1)) % MOD;
	}
	cout<<H;
}