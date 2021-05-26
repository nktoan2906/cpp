//http://laptrinhphothong.vn/Problem/Details/4614
#include <iostream>
using namespace std;
long long n;
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
    int max = a[0][0];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]%2==0 && a[i][j] > max)
            {
                max=a[i][j];
            }
        }
    }
    cout<<max;
    return 0;
}
    