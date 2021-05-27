#include <iostream>
using namespace std;
string s;
int main()
{
    int i, n, j, max, dem;
    cin>>n;
    char gt;
    for (i = 0; i < n; i++) cin>>s[i];
    max = 1;
    for (i = 0; i < n; i++) {
        dem = 0;
        for (j = 0; j < n; j++) {
            if (s[i] == s[j]) dem++;
        }
        if (max < dem) gt = s[i]; 
    }
    cout<<gt;
}