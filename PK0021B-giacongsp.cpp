#include <iostream>
#define ll long long
using namespace std;
ll spsum,sp,songay;
int main()
{
    cin>>spsum>>sp;
    while(spsum>0) {
        spsum-=sp;
        sp*=2;
        songay++;
    }
    cout<<songay;
    return 0;
}
