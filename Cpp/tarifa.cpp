#include <iostream>

using namespace std;

int main()
{
    int months,megabytes,total=0,mega_ramasi;
    cin>>megabytes>>months;
    for(int i=0;i<months;i++) {
       cin>>mega_ramasi;
       total += megabytes - mega_ramasi;
     
    }
    cout<<total+megabytes;
    return 0;
}