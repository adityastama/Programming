#include <iostream>
using namespace std;

int main()
{
	/* do while
	adalah perulangan yang membaca aksi dahulu
	lalu ke syarat kemudian baru mengulang kembali

	uniknya do walaupun salah (FALSE) aksi akan tetap dijalankan minimal 1x */

	int a = 1;

	do 
	{
		cout << "horeeee!! ";
		cout << a << endl;
		a++; // pakai assigment (++) agar variable (a) otomatis bertambih 1
	}
	while (a <= 10); // ini agar loop berhenti di angka 10

	return 0;
}
