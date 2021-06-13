#include <iostream>
using namespace std;
const int N = 1e5 + 1;
int main()
{
   int even[N], odd[N];
   int index = 0;
   int e, o, arr[e + o];
   e = o;
   cin >> e;
   for (int i = 1; i <= e; ++i) cin >> even[i];
   for (int i = 1; i <= o; ++i) cin >> odd[i] ;
   // them mang even vao mang arr
   for (int i = 0; i < e; i++) {
      arr[index] = even[i];
      index++;
   }
   // them mang odd vao mang arr
   for (int i = 0; i < o; i++) {
      arr[index] = odd[i];
      index++;
   }

   cout << "Tron hai mang thanh mot mang:\n";
   cout << "\nMang chan: ";
   for (int i = 0; i < e; i++)
      cout << even[i] << " ";

   cout << "\nMang le: ";
   for (int i = 0; i < o; i++)
      cout << odd[i] << " ";

   cout << "\nMang sau khi tron: ";
   for (int i = 0; i < N; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}