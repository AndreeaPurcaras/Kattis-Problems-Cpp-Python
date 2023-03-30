#include <iostream>

using namespace std;

int main()
{
    int test_cases,number_testcases,outlets,appliances;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
       cin>>number_testcases;
       appliances = 0;
       for(int o=0; o<number_testcases;o++){
           cin>>outlets;
           
           appliances+= outlets;
        
       }
       
       cout<<appliances-number_testcases+1<<"\n";
    }
   
    return 0;
}