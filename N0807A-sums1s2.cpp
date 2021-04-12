#include<iostream>
using namespace std;
string s1,s2;
int main(){
	cin>>s1>>s2;
	int s = 0;
	for(int i=0;i< s1.size();i++) s+=(s1[i]-48);
	for(int i=0;i< s2.size();i++) s+=(s2[i]-48);
	cout<<s;
}