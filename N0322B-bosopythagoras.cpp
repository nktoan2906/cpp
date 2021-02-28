//http://laptrinhphothong.vn/Problem/Details/5765
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,x,y,i,j,k,l,tong;
	cin>>n;
	long long a=1;
	long long b=0;
	if (n<5) cout<<-1;
	else
	{
	    for (i=1;i<n;i++)
        {
	        for (j=i+1;j<n;j++)
	        {
                double z=sqrt(i*i+j*j);
                if((int)z==z && ( z<n || z==n)) cout<<i<<" "<<j<<" "<<(int)z<<endl;
	        }
	     }
	}
    return 0;
}
    