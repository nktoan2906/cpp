#include<iostream>
#include <map> 
#define FOR(i,s) for(int i = 0 ; i < s.length() ; ++i)
#define FOR1(i,s,s1) for(int i = 0 ; i < (AGiaoB(s) + AGiaoB(s1)).length() ; ++i)
#define FOR09(i) for(char i = '0' ; i <= '9' ; ++i) 
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string AGiaoB(string s) {
	map<char , ll> count;
	FOR(i,s) ++count[s[i]];
	string kq = "";
	FOR(i,s) {
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
	FOR1(i,s,s1) ++dem[(AGiaoB(s) + AGiaoB(s1))[i]];
	FOR09(i) {
		if(dem[i] > 1) ++kq;
	}
	cout << kq;
}