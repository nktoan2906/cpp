//http://laptrinhphothong.vn/Problem/Details/4611
#include<iostream>
using namespace std;
int a[10000][10000];
long long i,j,n,s=0;
main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            s+=a[i][j];
        }
    }
    cout<<s;
    return 0;
}
    