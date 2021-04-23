#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
long long s1,s2;
ll sumchuso(ll n){
    if(n < 10) return n;
    return n%10 + sumchuso(n/10);
}
int main()
{
    cin>>s1>>s2;
    cout << sumchuso(s1) / __gcd(sumchuso(s1), sumchuso(s2)) * sumchuso(s2)  ;
    return 0;
}
    