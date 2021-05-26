//http://laptrinhphothong.vn/Problem/Details/5802
#include <iostream>
using namespace std;
long long n;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%10==0) cout<<i<<endl;
        else cout<<i<<" ";
    }
    return 0;
}
    