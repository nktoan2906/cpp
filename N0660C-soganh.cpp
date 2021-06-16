#include<iostream>
#include<string.h>
#define mod 1e9 + 7
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string s;
signed main() {
	FASTER;
	ll dem = 0 ;
	cin >> s;
	ll valueganh = -1;
	if(s.length() >= 3) {
		for(int i = 3 ; i <= s.length() ; i+= 2){
			dem++;
			if(s.substr(0 , dem) == s.substr(s.length() - dem , dem)) valueganh = max(valueganh , dem);
		}
	}
	cout << valueganh;
}