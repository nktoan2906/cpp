//http://laptrinhphothong.vn/Problem/Details/5738
#include <iostream>
using namespace std;
long long n,s,d;
int main() {
	cin>>n;
	s = 2;
	while (s < n){
		s+=3;
		if(s == n){
			for(int i=2;i<=n;i+=3){
				d+=i;
			}
			cout<<d;
			return 0;
		}
	}
	cout<<"NO";
}
