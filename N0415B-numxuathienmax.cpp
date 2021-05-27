#include <iostream>
using namespace std;
int a[101];
int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) cin>>a[i];
    int max = 1;
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) dem++;
        }
        if (max < dem) max = dem; 
    }
    cout<<max;
}