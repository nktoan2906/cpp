#include <iostream>
using namespace std;
int BinarySearch(int a[], int n, int x) {
    int left = 1,right = n,pos = 0;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == x) {
			pos = mid;
			break;
		}
        if (a[mid] > x) right = mid - 1; 
        else if (a[mid] < x) left = mid + 1; 
    }
    return pos; 
}
int main() {
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;++i) cin>>a[i];
	int result = BinarySearch(a, n - 1, x);
	if (result == -1) cout<<"NO";
	else cout<<"YES";
	return 0;
}