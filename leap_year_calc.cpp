#include<iostream>
using namespace std;
int main() {
   int year;
   cout << "What year would you like to check?\n";
   cin >> year;
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
   cout<<year<<" is a leap year";
   else
   cout<<year<<" is not a leap year\n";
   return 0;
}
