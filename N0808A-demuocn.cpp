//http://laptrinhphothong.vn/Problem/Details/5823
#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
int main()
{
      ll n, i = 1, d = 0;
      cin >> n;
      while (i <= sqrt(n)) {
            if (n % i == 0) {
                  d++;
                  if (i != (n / i)) d++;
            }
            i++;
      }
      cout << d;
      return 0;
}