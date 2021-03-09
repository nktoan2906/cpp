//http://laptrinhphothong.vn/Problem/Details/5956
#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    cout << s;
    return 0;
}