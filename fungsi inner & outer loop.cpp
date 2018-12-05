#include <iostream>
using namespace std;

int main()
{
	/* inner & outer loop
	   adalah bentuk perulangan di dalam perulangan yang lain

	   kita akan coba menggunakan for 
	   contohnya seperti ini : */

	cout << "==========================" << endl;
	cout << "program inner & outer loop" << endl;
	cout << "==========================" << endl;

	cout << "bentuk perkalian sederhana 1 - 5" << endl;
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b++) // kita buat perulangan lagi disini
		{
			cout << a << " * " << b << " = ";
			cout << a * b << "\t"; // \t=tabulasi horizontal (memberi jarak yang sama disetiap kalimat)
		}
		cout << endl;
	}

cout << "\nsudah selesai :)" << endl;

return 0;
}
