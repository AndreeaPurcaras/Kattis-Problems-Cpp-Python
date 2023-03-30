#include <iostream>

using namespace std;

int main()
{
   int l,d,n,m,x;
   int sum = 0;
   cin>>l>>d>>x;
   for(int i=l;i<=d;i++) {
       sum = 0;
       int number=i;
      while(number>0) 
   {
       sum =sum + number%10;
       number /= 10;
       
   } 
   if(sum==x) { 
    n=i;
    break;
   }
   }
  for(int i=d;i>=l;i--) {
         sum = 0;
         int number=i;
      while(number>0) 
   {
       sum =sum + number%10;
       number /= 10;
       
   } 
   if(sum==x) { 
    m=i;
    break;
  }
  }
  cout<<n<<"\n"<<m;
    return 0;
}