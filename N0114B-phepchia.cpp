//http://laptrinhphothong.vn/Problem/Details/5621
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
long long a,b;
int main()
{
    cin>>a>>b;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<< fixed << setprecision(2)<<(double)a/b;
    return 0;
}
    