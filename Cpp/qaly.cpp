#include <iostream>

using namespace std;

int main()
{
  float suma = 0;
  int ani;
  float p, g;
    cin>>ani;
  for(int i=0;i<ani;i++)
  {
      cin>>p>>g;
      suma = suma + p * g;
  } 
    cout<<suma;
  return 0;
}