#include <iostream>

int main()
{
    using namespace std;
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << 1;
    }
    else if (x < 0 && y < 0) {
        cout << 3;
    }
    else if (x < 0 && y > 0) {
        cout << 2;
    }
    else
        cout << 4;
      
    return 0;
}