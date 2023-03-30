#include <iostream>
using namespace std;
int main() {
	int r, n[102], c;
	cin >> r >> c;
	for (int i = 1; i <= r; i++) {
		n[i]=i;
	}
	for (int i = 1; i <= c; i++)
	{
		int temp;
		cin >> temp;
		n[temp] = -1;
	}
	if (c == r) {
		cout << "too late";
	}
	else {
		for(int i=1;i<=r;i++)
			if (n[i] > 0)
			{
				cout << n[i] << endl;
				break;
			}
	}
	return 0;
}