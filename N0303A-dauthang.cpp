#include <iostream>
#define FOR13() for (int i=1; i<=3; i++)
#define FOR(i,n) for (int j=1; j<=n; j++)
#define ll long long 
using namespace std;
ll n;
int main(){ 
    cin>>n;
    FOR13() {
        FOR(i,n) {
            cout<<"#";
        }
        n--;
        cout<<endl;
    }
    return 0;
}
    