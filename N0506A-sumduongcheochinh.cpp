#include<iostream>
using namespace std;
const int N = 101;
int main() {
    int a[N][N],n,s = 0;
    cin>>n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j) cin>>a[i][j];
	} 
    for(int i=1;i<=n;i++) s+=a[i][i];
    cout<<s;
}