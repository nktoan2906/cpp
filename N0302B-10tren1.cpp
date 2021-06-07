#include <iostream>
#define FOR(i,n) for(int i=1;i<=n;++i)
#define imod10 i % 10 == 0
#define ll long long
using namespace std;
ll n;
int main() {
    cin>>n;
    FOR(i,n){
        if(imod10) cout<<i<<endl;
        else cout<<i<<" ";
    }
    return 0;
}
    