#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    int delta = b*b - 4*a*c;
    if(delta > 0) cout<<"TWO";
    else if(delta == 0) cout<<"ONE";
    else cout<<"NOSOL";
    return 0;
}