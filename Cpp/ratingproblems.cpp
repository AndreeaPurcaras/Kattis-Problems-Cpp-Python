#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double totalNumbers, grade, n, p, grade2, m;
    double min, max, total, v_min, x, out, v_max, y, out2, min_out, max_out;
    min = -3;
    max = 3;
    cin >> totalNumbers >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> grade;
        p += grade;
        total = p;
        
    }
            if (totalNumbers != n) 
            {
                v_min = totalNumbers - n; 
                x = v_min * min;
                v_max = totalNumbers - n;
                y = v_max * max;
                out = x + total;
                out2 = y + total;
                min_out = out / totalNumbers;
                max_out = out2 / totalNumbers;
                cout << min_out << endl;
                cout << max_out;
            }  if (totalNumbers == n)
            {
              x = total / totalNumbers; 
            min_out = x;
            max_out = x;
                  cout << min_out << endl;
                  cout << max_out;
                
            }
       
    return 0;
}