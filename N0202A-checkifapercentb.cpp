//http://laptrinhphothong.vn/Problem/Details/5596
#include <iostream>
using namespace std;
long long a,b;
int main()
{
    cin >> a >> b;
    if(b!=0) {
        if(a%b==0) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"-1";
    return 0;
}
    