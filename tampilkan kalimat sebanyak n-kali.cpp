#include <iostream>

using namespace std;

int main()
{
	int n, a;

	cout << "\nmenampilkan kata algoritma dan pemrograman sebanyak _n kali" << endl;
	cout << "\nmasukan jumlah yang diinginkan : ";
	cin >> n;

	cout << "" << endl;

	for (a = 1; a <= n; ++a)
	{
		if (a > 30)
			break;

		cout << "algoritma dan pemrograman" << endl;
	}	

	cout << "\nhanya tampilkan sampai 30x saja....." << endl;
	return 0;
}
