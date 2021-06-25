#include <iostream>
#define FOR(i,n) for (int i = 0; i < n; ++i)
#define FOR1(j,s) for (int j = 0; j < s.size(); ++j)
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	bool check = false;
	FOR(i,n) {
		cin >> s;
		FOR1(j,s){
			if (s[j] == '6' || s[j] == '8') {
				cout << s << " ";
				check = true;
				break;
			}
		}
	}
	if(!check) cout << "-1"; 
}