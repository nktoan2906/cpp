//http://laptrinhphothong.vn/Problem/Details/5605
#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long min = a;
    if(min > a){
        min = a;
    }
    if(min > b){
        min = b;
    }
    if(min > c){
        min = c;
    }
    if(min > d){
        min = d;
    }
    cout<<min;
    return 0;
}
    