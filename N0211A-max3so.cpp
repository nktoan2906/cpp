//http://laptrinhphothong.vn/Problem/Details/5808
#include <iostream>
using namespace std;
int main (){
    long long a,b,c,max;
    cin>>a>>b>>c;
    max = a;
    if(max < a ){
        max = a;
    }
    if(max < b ){
        max = b;
    }
    if(max < c ){
        max = c;
    }
    cout<<max;
    return 0;
}