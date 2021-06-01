#include<iostream>
#include<string>
using namespace std;
string Add(string a, string b)
{
    string res=" ";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--) {
        int tmp = a[i] - 48 + b[i] - 48 + carry;
        carry = tmp/10;
        tmp %= 10;
        res = (char) (tmp+48) + res;
    }
    if(carry>0) res="1"+res;
    return res;
}
int main() {
    string a,b;
	cin>>a>>b;
	cout<<Add(a,b);
}