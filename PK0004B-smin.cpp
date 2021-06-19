#include <iostream>
#include <vector>
#include <algorithm>
#define FOR(i,n) for(long i=0;i<n;++i)
using namespace std;
int main(){
    long n,Min = 1e7,temp;
    cin>>n;
    vector<long> a;
    FOR(i,n) {
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    n--;
    FOR(i,n) {
        Min = min(Min,a[i+1] - a[i]);
    }
    cout<<Min; 
}