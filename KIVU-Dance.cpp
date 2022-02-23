#include <bits/stdc++.h>
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
long long boys, girls, boy_height[100005], girl_height[100005];
int main() {
    cin >> boys >> girls;
    RUN(i, 1, boys) cin >> boy_height[i];
    RUN(i, 1, girls) cin >> girl_height[i];
    sort(boy_height + 1, boy_height + boys + 1);
    sort(girl_height + 1, girl_height + girls + 1);
    int pairnum = 0, j = 1;
    RUN(i, 1, boys) {
        if (boy_height[i] > girl_height[j]) {
            pairnum ++;
            j++;
        }
	}
    cout << pairnum;
    return 0;
}
    