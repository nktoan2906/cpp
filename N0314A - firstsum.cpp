//http://laptrinhphothong.vn/Problem/Details/5616
#include <iostream>
using namespace std;
long long n,k;
int main()
{
    cin>>n;
    long long i=1;
    while( k < n)
    {
        k+=i;
        i++;
    }
    if( k == n) cout<<"YES";
    else cout<<"NO";
    return 0;
}
    