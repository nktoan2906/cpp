#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
ll s1,s2;
inline ll Sum(ll s){
    if(s < 10) return s;
    return s%10 + Sum(s/10); 
}
int main() {
    cin>>s1>>s2;
    cout << (Sum(s1) * Sum(2))/( __gcd(Sum(s1), Sum(s2)));
    return 0;
}
    