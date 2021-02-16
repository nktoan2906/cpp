//http://laptrinhphothong.vn/Problem/Details/5604
#include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
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
    cout<<min;
}