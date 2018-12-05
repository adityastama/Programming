#include <iostream>
using namespace std;

int main()
{

int suhu;

cout << "\n=======PROGRAM IDENTIFIKASI ZAT=========\n" << std::endl;

cout << "kita akan mengidentifikasi air\n" << endl;
cout << "masukan suhunya : ";
cin >> suhu;

if (suhu <= 0)
	{
	cout << "\nair ini - BEKU -" << endl;
	}
if (suhu > 0 && suhu <= 100)
	{
	cout << "\nair ini - CAIR -" << endl;
	}
if (suhu > 100)
	{
	cout << "\nair ini - menguap -" << endl;
	}

	return 0;
}
