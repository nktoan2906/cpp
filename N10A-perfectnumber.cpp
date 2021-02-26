//http://laptrinhphothong.vn/Problem/Details/5829
#include <iostream>
#include <math.h>
using namespace std;
int n,s=0;
int main()
{
    cin>>n;
    for(int i=1;i<=trunc(sqrt(n));i++)
    {
       if(n%i==0) s=s+i+n/i;
    }
    if(s==2*n) cout<<"YES";
    else cout<<"NO";
    return 0;
}
    