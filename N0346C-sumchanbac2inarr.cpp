#include <iostream>
#define FOR(i,n) for(int i=1;i<=n;i++)
using namespace std;
int main () {
    int n;
    int a[10000+1];
    cin>>n;
    FOR(i,n) cin>>a[i];
    FOR(i,n)  {
        int s = (4 * a[i] * (a[i] + 1) * (2 * a[i] + 1)) / 6;
        cout<<s<<endl;
    }
    return 0;
}
    