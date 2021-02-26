//http://laptrinhphothong.vn/Problem/Details/4610
#include<iostream>
using namespace std;
int a[10000][10000];
long long i,j,n;
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
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
    