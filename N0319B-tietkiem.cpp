//http://laptrinhphothong.vn/Problem/Details/5761
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ngaydau = 2000;
    long long kq = 0;
    for(int i=1;i<=n;i++){
        kq += ngaydau;
        ngaydau += 1000; 
    }
    cout<<kq;
    return 0;
}