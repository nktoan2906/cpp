#include <iostream>
using namespace std;
int a[100];
int main()
{
    int i, n, j, max, gt, dem;
    cin>>n;
    for (i = 0; i < n; i++) cin>>a[i];
    max = 1;
    for (i = 0; i < n; i++) {
        dem = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j]) dem++;
        }
        if (max < dem) {
            max = dem;
            gt = a[i];
        }
    }
    cout<<max;
}