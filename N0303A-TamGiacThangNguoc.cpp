#include <iostream>
#define RUN3 for (int i = 1; i <= 3; ++i)
#define RUNJ for (int j = 1; j <= n; ++j)
using namespace std;
long long  n;
int main() {
    cin >> n;
    RUN3 {
        RUNJ {
            cout << "#";
        }
        --n;
        cout << endl;
    }
    return 0;
}
