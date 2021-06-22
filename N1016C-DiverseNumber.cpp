#include <iostream>
#define FOR(i,r) for(long i=1; i<=r; ++i)
#define FOR_1(i,r) for(long i=2; i<=r; ++i)
#define FOR_2(j,i,r) for(long j=2*i; j<=r; j+=i)
#define FOR(l,r) for(long i=l; i<=r; ++i)
using namespace std;
const int N = 1e5 + 1;
int l,r,dem=0,a[N];
int main() {
    cin>>l>>r;
    FOR(i,r) a[i]=1;
    FOR_1(i,r){
        FOR_2(j,i,r) a[j]+=i;
    }
    for(long i=l; i<=r; ++i) {
        dem+=a[i] > i;
    }
    cout<<dem;
}
    