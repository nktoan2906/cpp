//http://laptrinhphothong.vn/Problem/Details/5676/?contestid=301
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
bool checkprimes(int a)
{
    if (a < 2) return false;
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0) return false;
    }
    return true;
}
void givenanARRAY(int a[], int n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
int checkprimesinARRAY(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkprimes(a[i])) cnt++;
    }
    return cnt;
}
int main()
{
    int a[1000001];
    long long n;
    cin >> n;
    givenanARRAY(a, n);
    cout << checkprimesinARRAY(a, n);
}