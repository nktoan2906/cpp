//http://laptrinhphothong.vn/Problem/Details/4622
#include<iostream>
using namespace std;
string s;
char c;
int count = 0;
int main() {

    cin >> s >> c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) count++;
    }
    cout << count;
    return 0;
}
    