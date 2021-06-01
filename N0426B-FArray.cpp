#include <iostream>
using namespace std;
int F(int n) {
    if (n == 1 || n == 2)
        return 1;
    return F(n - 1) + F(n - 2);
}
int main() {
    int n,a[71];
    cin >> n;
    for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cout<<F(i)<<endl;
    return 0;
}