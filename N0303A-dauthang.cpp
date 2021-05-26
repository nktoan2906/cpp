//http://laptrinhphothong.vn/Problem/Details/4573
#include <iostream>
using namespace std;
long long n;
int main(){ 
    cin>>n;
    for (int i=1; i<=3; i++) {
        for (int j=1; j<=n; j++) {
            cout<<"#";
        }
        n--;
        cout<<endl;
    }
    return 0;
}
    