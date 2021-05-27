#include <iostream> 
#include <string> 
#include <regex> 
using namespace std; 
int main (void)  { 
   string MyString; 
   getline(cin, MyString); 
   regex digit("[[:digit:]]"); 
   cout<< regex_replace(MyString, digit, "") << endl; 
   return 0; 
} 