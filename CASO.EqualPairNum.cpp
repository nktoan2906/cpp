#include<bits/stdc++.h>
using namespace std;
long long int n, x, a[100009],s;
int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
        cin >> x;
        s += a[x];
        ++a[x]; 
	}
	cout << s; 
	
 }
    