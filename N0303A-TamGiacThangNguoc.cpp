#include <iostream>
#define FOR(i,n) for (int i=1; i<=3; i++)
#define FOR1(j,n) for (int j=1; j<=n; j++)
#define ll long long 
using namespace std;
ll n;
int main(){ 
    cin>>n;
    FOR(i,n) {
        FOR(j,n) {
            cout<<"#";
        }
        --n;
        cout<<endl;
    }
    return 0;
}
    