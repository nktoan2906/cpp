//http://laptrinhphothong.vn/Problem/Details/5756
#include <iostream>
using namespace std;
int main (){
    long long n;
    cin>>n;
    long long nsau = n%10;
    if(nsau %2 == 0)cout<<"YES";
    else cout<<"NO";
    return 0;
}