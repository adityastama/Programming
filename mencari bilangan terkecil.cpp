#include <iostream>
using namespace std;

int main()
{
	int b1, b2, b3;

	cout <<"\n=== PROGRAM MENCARI BILANGAN TERKECIL ===\n" << endl;

	cout << "masukan angka pertama : ";
	cin >> b1;

	cout << "masukan angka kedua : ";
	cin >> b2;

	cout << "masukan angka ketiga : ";
	cin >> b3;

	cout << "\n_____________________" << endl;
	cout << "\nhasilnya = ";

	if (b1 < b2 && b1 < b3)
	{
		cout << b1 << " adalah angka terkecil" << endl;
	}
	else if (b2 < b1 && b2 < b3)
	{
		cout << b2 << " adalah angka terkecil" << endl;
	}
	else
	{
		cout << b3 << " adalah angka terkecil" << endl;
	}

	return 0;
}
