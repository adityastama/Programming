#include <iostream>
using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	cout << "\nselamat datang di program kalkulator\n" << endl;

	cout << "masukan angka pertama : ";
	cin >> a;

	cout << "\npilih operator berikut : " << endl;
	cout << "tambah	( + )" << endl;
	cout << "kurang	( - )" << endl;
	cout << "kali	( x )" << endl;
	cout << "bagi	( : )" << endl;

	pilihan:
	cout << "\nmasukan operatornya : ";
	cin >> aritmatika;

	switch (aritmatika)
	{
		case '+':
		{
		cout << "\nmasukan angka kedua : ";
		cin >> b;

		hasil = a + b;
		cout << "\nhasilnya " << a << " + " << b << " = " << hasil;
		break;
		}
	
		case '-':
		{
		cout << "\nmasukan angka kedua : ";
		cin >> b;

		hasil = a - b;
		cout << "\nhasilnya " << a << " - " << b << " = " << hasil;
		break;
		}
		case 'x':
		{
		cout << "\nmasukan angka kedua : ";
		cin >> b;

		hasil = a * b;
		cout << "\nhasilnya " << a << " x " << b << " = " << hasil;
		break;
		}
		case ':':
		{
		cout << "\nmasukan angka kedua : ";
		cin >> b;

		hasil = a / b;
		cout << "\nhasilnya " << a << " : " << b << " = " << hasil;
		break;
		}

		default:
		cout << "\npilihan yang anda masukan salah!!!\n" << endl;
		goto pilihan;
	}

	cout << "\nkalkulator selesai....\n" << endl;

	return 0;
}
