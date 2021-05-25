#include<iostream>
using namespace std;
long double i,n,sum;
int main() {
    cin >> n;
    while(sum < n){
        ++i;
        sum += 1/i;
    }
    cout << (long long)(i);
}