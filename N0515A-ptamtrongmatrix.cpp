//http://laptrinhphothong.vn/Problem/Details/5686
#include <iostream>
using namespace std;
long long n,dem;
int a[1600][1600];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j] < 0)
            {
                dem++;
            }
        }
    }
    cout<<dem;
    return 0;
}
    