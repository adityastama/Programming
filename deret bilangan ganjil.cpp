#include <iostream>
using namespace std;

int main()
{
	int n, i;

	cout << "\nMEMBUAT DERET BILANGAN GANJIL" << endl;
	cout << "=============================\n" << endl;

	cout << "masukan angka ke -n : ";
	cin >> n;

	cout << endl;

	for (i = 0; i <= n; i++)
	{
		if ( i % 2 != 0)
		{
			cout << i << " "; // " " sebagai pemisah jarak antar angka
		}
	}

	cout << "\n" << endl;
	return 0;
}
