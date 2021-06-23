#include <iostream>
#define ulli unsigned long long int 
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n],dem = 0;
    for(int i=1 ; i<=n; i++) cin>>a[i];
    int t = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] % 3 != 0) { 
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    for (int i = 1; i <= n; ++i) {
        if (a[i] % 3 != 0 && a[i] % 5 != 0) {
            cout<<a[i]<<" ";
        }
    }
}