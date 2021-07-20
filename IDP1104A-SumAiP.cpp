#include <iostream>
#include <vector>
#define RUN for(int i = 1; i <= n; ++i)
#define RUNQ for(int i = 1; i <= q; ++i)
#define ulli unsigned long long int
using namespace std;
int main() {
    int n, q, p;
    cin >> n;
    vector < int > a(n + 1), s(n + 1);
    s[0] = 0;
    RUN {
    	cin >> a[i];
    	s[i] = s[i - 1] + a[i];
    }
    cin >> q;
    RUNQ {
        cin >> p;
        cout << s[p] << '\n'; // s(r) - s(l - 1); 
    }
}