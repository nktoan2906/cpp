//http://laptrinhphothong.vn/Problem/Details/5888
#include <iostream>
using namespace std;
bool kiemtra(int n)
{
    long long ntruoc = n / 10;
    long long nsau = n % 10;
    return ntruoc == nsau && n < 100 && n >=10 ;
}

int main()
{
    long long n;
    cin >> n;

    if (kiemtra(n))
    {
        cout << "YES";
    }
    else cout << "NO";
}
