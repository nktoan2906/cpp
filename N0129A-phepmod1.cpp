#include<iostream>
#define ll long long
using namespace std;
ll PhepMod1(ll a, ll b, ll c){
	return ((a % c) + (b % c)) % c;
}
int main(){
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<PhepMod1(a,b,c);
}