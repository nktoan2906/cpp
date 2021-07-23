#include <iostream>
#define RUN for (int i = 1; i <= n; ++i)
#define RUNJ for (int j = 1; j <= n; ++j)
using namespace std;
int main() {
    int n;
    cin >> n;
    RUN {
        RUNJ {
            cout << "$"; //luu y,co mot khoang trong o day
        }
        cout << "\n";
    }
    return 0;
}
