#include <iostream>
using namespace std;

int main(){

int nilai;

cout << "===PROGRAM KONVERSI NILAI===" << endl;
cout << "\n\n____________________________________\n" << endl;

cout << "kode skala nilai : " << endl;
cout << "1. 80 - 100" << endl;
cout << "2. 65 - 75" << endl;
cout << "3. 50 - 64" << endl;
cout << "4. 35 - 49" << endl;
cout << "5. 0 - 34" << endl;

kode:
cout << "\n masukan kode dari nilai anda : ";
cin >> nilai;

switch(nilai)
{
	case 1:
		cout << "\nNILAI ANDA : -A-" << endl;
		break;
	case 2:
		cout << "\nNILAI ANDA : -B-" << endl;
		break;
	case 3:
		cout << "\nNILAI ANDA : -C-" << endl;
		break;
	case 4: 
		cout << "\nNILAI ANDA : -D-" << endl;
		break;
	case 5:
		cout << "\nNILAI ANDA : -E-" << endl;
		break;
		
	default:
		cout << "\nkode yang anda masukan salah! silahkan masukan kembali\n" << endl;
		goto kode;
}


return 0;
}
