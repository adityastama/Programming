#include <iostream>
using namespace std;

int main()
{
	int angka;
	cout << "\nPROGRAM PENGUBAH NILAI KE HURUF" << endl;
	cout << "===============================\n" << endl;

	nilai:
	cout << "masukan nilai anda ( 0 - 100 ) : ";
	cin >> angka;

	if (angka >= 0 && angka <= 19)
	{
		cout << "\nnilai anda = E" << endl;
		cout << "persentase nilai 0 - 19" << endl;
	}
	if (angka >= 20 && angka <= 39)
	{
		cout << "\nnilai anda = D" << endl;
		cout << "persentasi nilai 20 - 39" << endl;
	}
	if (angka >= 40 && angka <= 59)
	{
		cout << "\nnilai anda = C" << endl;
		cout << "persentase nilai 40 - 59" << endl;
	}
	if (angka >= 60 && angka <= 79)
	{	
		cout << "\nnilai anda = B" << endl;
		cout << "persentase nilai 60 - 79" << endl;
	}
	if (angka >= 80 && angka <= 100)
	{
		cout << "\nnilai anda = A" << endl;
		cout << "persentase nilai 80 - 100" << endl;
	}

	return 0;
}
