//http://laptrinhphothong.vn/Problem/Details/5639
#include<iostream>
using namespace std;
const long long MOD = 1e9+7;
long double i,n,sum;
int main() {
    cin >> n;
    while(sum < n){
        ++i;
        sum += 1/i;
    }
    cout << (long long)(i);
}