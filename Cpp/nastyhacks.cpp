#include <iostream>

using namespace std;

int main()
{
  
  int n;
  cin>>n;
  int r,e,q,c;
  for(int i=0; i<n; i++)
  {   
      cin>>r>>e>>q;
      c = e - q;
      if(r<c) 
      {
          cout<<"advertise\n";
      }
      else if (r==c)
      {
          cout<<"does not matter\n";
      } else if (r>c) 
      {
          cout<<"do not advertise\n";}
  }
  return 0;
}