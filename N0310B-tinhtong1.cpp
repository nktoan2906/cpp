//http://laptrinhphothong.vn/Problem/Details/5618
#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long s = (n * ( n + 1 ) * ( 2 * n + 1 ))/6;
    cout<<s;
    return 0;
}