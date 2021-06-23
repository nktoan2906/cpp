#include <iostream>
#define ll long long
#define FOR(i,n) for(int i=1;i<=n;i++)
#define FOR(j,m) for(int j=1;j<=m;j++)
using namespace std;
ll n,m;
char ch;
int main() {
    cin>>n>>m>>ch;
    FOR(i,n){
        FOR(j,m){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
    