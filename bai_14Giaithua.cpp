#include <iostream>
using namespace std;
int main()
{
	cout << "TINH LUY THUA" << endl;
	int so, mu, luythua = 1;
	cout << "nhap so: "; cin >> so;
	cout << "nhap mu: "; cin >> mu;
	for (int i = 0; i < mu; i++)
	{
		luythua *= so;
	}
	cout << so << " ^ " << mu << " = " << luythua;

	cout << "\nTINH GIAI THUA" << endl;

	int giaithua = 1;
	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << so << "! = " << giaithua;
	return 0;
}