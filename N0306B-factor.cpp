//http://laptrinhphothong.vn/Problem/Details/4576
#include <iostream>
using namespace std;
int main() {
    long long n,s;
    cin>>n;
    long long t=1;
    for (int i=1; i<=n; i++) {
        t *= i%1000000007;
        s = t%1000000007;
    }
    cout<<s;
    return 0;
}
    