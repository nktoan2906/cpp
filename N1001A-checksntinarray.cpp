#include <iostream>
#define FORCAN2(i,a) for (int i = 2; i * i<= a; ++i) 
#define FOR(i,n) for (int i = 1; i <= n; i++) 
#define amodi a % i == 0
using namespace std;
const int N = 1e3 + 1;
bool CheckSNT(int a) {
    if (a < 2) return false;
    FORCAN2(i,a)  {
        if (amodi) return false;
    }
    return true;
}
int checkSNTARRAY(int a[], int n) {
    int dem = 0;
    FOR(i,n){
        if (CheckSNT(a[i])) dem++;
    }
    return dem;
}
int main() {
    int a[N],n;
    cin >> n;
    FOR(i,n) cin >> a[i];
    cout << checkSNTARRAY(a, n);
}