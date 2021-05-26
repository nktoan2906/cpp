//http://laptrinhphothong.vn/Problem/Details/5763
#include <iostream>
using namespace std;
long long a,b,s,s1;
int main() {
    cin>>a>>b;
    for(int i=1; i<a; i++) {
        if(a%i==0) s=s+i;
    }
    for(int i=1; i<b; i++) {
        if(b%i==0) s1=s1+i;
    }
    if((s==b)&&(s1==a)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
    