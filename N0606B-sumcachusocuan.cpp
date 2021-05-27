//http://laptrinhphothong.vn/Problem/Details/4626
#include<iostream>
using namespace std;
int main(){
	int sum = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int x = s[i] - 48;
		sum += x;
	}
	cout << sum; 
}