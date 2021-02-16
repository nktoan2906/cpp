// http://laptrinhphothong.vn/Problem/Details/5601
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n == (long long)sqrt(n) * (long long)sqrt(n)){
        cout<<"YES";
    }
    else cout<<"NO";
}