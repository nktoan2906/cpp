#include <iostream>
#include <vector>
using namespace std;
const int N = 20;
vector<long long> x;
long long a[N],n,k;
void CIN(vector<long long> x){
	for(int i=1;i<=k;++i) cout<<x[i]<<" ";
	cout<<endl;
}
void ListChinHop(long long i){
	for(int j=1;j<=n;++j){
		if(a[j] == 0){
			x[i] = j;
			a[j] = 1;
			if(i == k) CIN(x);
			else {
				ListChinHop(i + 1);
				a[j] = 0;
			}
		}
	}
}
int main() {
	cin>>n>>k;
	ListChinHop(1);
}