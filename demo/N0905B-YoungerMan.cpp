#include <iostream>
using namespace std;
struct CAUTHU{
    string name;
	int weight,height,age;
};
int main() {
	int n;
	cin>>n;
	CAUTHU a[n];
	for(int i=0;i<n;++i) cin>>a[i].name>>a[i].weight>>a[i].height>>a[i].age;
	int min = a[0].age;
	for(int i=0;i<n;++i){
		if(a[i].age < min) cout<<a[i].name<<" "<<a[i].weight<<" "<<a[i].height<<" "<<a[i].age;
	}
}