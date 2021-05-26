//http://laptrinhphothong.vn/Problem/Details/5915
#include <iostream>
using namespace std;
int main () {
    long long n;
    int a[10000+1];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) {
        long long s = (4 * a[i] * (a[i] + 1) * (2 * a[i] + 1)) / 6;
        cout<<s<<endl;
    }
    return 0;
    //( 4 * n * ( n + 1 ) * ( 2 * n + 1 ))/6;
}
    