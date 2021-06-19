#include <iostream>
#define FOR_2(i,n) for(long i=2;i<=n;++i)
using namespace std;
int main() {
    long n,min,max,a;
    cin>>n>>min>>a;
    max=a-min;
    FOR_2(i,n) {
        cin>>a;
        if (a-min>max) max=a-min;
        if (min>a) min=a;
    }
    cout<<max;
}