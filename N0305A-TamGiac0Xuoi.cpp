#include <iostream>
#define RUN for (int i = 1; i <= n; ++i)
#define RUNJI for (int j = 1; j <= i; ++j)
#define ll long long
using namespace std;
ll n;
int main() {
    cin >> n;
    RUN {
        RUNJI {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
