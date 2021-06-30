#include<iostream>
#include <map>
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string AGiaoB(string s) {
	map<char , ll> count;
	for(int i = 0 ; i < s.length() ; ++i) ++count[s[i]];
	string kq = "";
	for(int i = 0 ; i < s.length() ; ++i) {
		if(count[s[i]] > 0) {
			kq += s[i];
			count[s[i]] = 0 ;
		}
	}
	return kq;
}
signed main(){
	FASTER;
	string s , s1;
	cin >> s >> s1;
	ll kq = 0 ;
	map<char , ll> dem;
	for(int i = 0 ; i < (AGiaoB(s) + AGiaoB(s1)).length() ; ++i) ++dem[(AGiaoB(s) + AGiaoB(s1))[i]];
	for(char i = '0' ; i <= '9' ; ++i) {
		if(dem[i] > 1) ++kq;
	}
	cout << kq;
}