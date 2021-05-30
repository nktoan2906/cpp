#include<iostream>
using namespace std;
void THN(int n, int a, int b, int c){
	if(n==1){
		cout<<a<<" "<<c<<endl;
		return ;
	}
	THN(n-1,a,c,b);
	THN(1,a,b,c);
	THN(n-1,b,a,c);
}
int main(){
    int n,a=1,b=2,c=3;
	cin>>n;
	THN(n,1,2,3);
}