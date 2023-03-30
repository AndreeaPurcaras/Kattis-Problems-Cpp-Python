#include <iostream>

using namespace std;

int main()
{
   int even;
   int formula;
   cin >> even;
   for (int i = 0; i < even; i++) {
       cin >> formula;
       if (formula%2 == 0){
       cout<<formula <<" " << "is even\n";}
       else
       {cout<<formula <<" " << "is odd\n";}
   }
}