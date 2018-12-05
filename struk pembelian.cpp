#include <iostream>
using namespace std;

int main()
{
	int kode, tiket, harga, total, bayar;
	float kembali;
	string tujuan;
	char jawab;

	cout << "\n\n" << endl;

	cout << "       SELAMAT DATANG DI LOKET      " << endl;
	cout << "====================================" << endl;
	cout << "          STASIUN JAKARTA           " << endl;
	cout << "====================================\n\n" << endl;

	daftar:
	cout << "           DAFTAR TUJUAN            " << endl;
	cout << "====================================" << endl;
	cout << "|| 1. BANTEN     :     Rp. 15.000 ||" << endl;
	cout << "|| 2. BANDUNG    :     Rp. 20.000 ||" << endl;
	cout << "|| 3. SEMARANG   :     Rp. 55.000 ||" << endl;
	cout << "|| 4. SURABAYA   :     Rp. 110.000||" << endl;
	cout << "====================================" << endl;

	ulang:
	cout << "\nMASUKAN NOMER TUJUAN ANDA : ";
	cin >> kode;

	switch(kode)
	{
		case 1:
			tujuan = "BANTEN";
			harga = 15000;
			cout << "\ntujuan anda [ BANTEN || Rp 15.000 ]" << endl;
			cout << "masukan jumlah tiket : ";
			cin >> tiket;
			total = harga*tiket;
			cout << "\ntotal harga = Rp " << total << endl;
			cout << "masukan pembayaran anda : ";
			cin >> bayar;
			kembali = bayar - total;
			break;

		case 2:
			tujuan = "BANDUNG";
			harga = 15000;
			cout << "\ntujuan anda [ BANDUNG || Rp 20.000 ]" << endl;
			cout << "masukan jumlah tiket : ";
			cin >> tiket;
			total = harga*tiket;
			cout << "\ntotal harga = Rp " << total << endl;
			cout << "masukan pembayaran anda : ";
			cin >> bayar;
			kembali = bayar - total;
			break;

		case 3:
			tujuan = "SEMARANG";
			harga = 55000;
			cout << "\ntujuan anda [ SEMARANG || Rp 55.000 ]" << endl;
			cout << "masukan jumlah tiket : ";
			cin >> tiket;
			total = harga*tiket;
			cout << "\ntotal harga = Rp " << total << endl;
			cout << "masukan pembayaran anda : ";
			cin >> bayar;
			kembali = bayar - total;
			break;

		case 4:
			tujuan = "SURABAYA";
			harga = 110000;
			cout << "\ntujuan anda [ SURABAYA || Rp 110.000 ]" << endl;
			cout << "masukan jumlah tiket : ";
			cin >> tiket;
			total = harga*tiket;
			cout << "\ntotal harga = Rp " << total << endl;
			cout << "masukan pembayaran anda : ";
			cin >> bayar;
			kembali = bayar - total;
			break;

		default:
			cout << "kode yang anda masukan salah!" << endl;
			goto ulang; 
	}

	system("cls");

	cout << "\n\n" << endl;

	cout << "============= STRUK PEMBAYARAN ===========" << endl;
	cout << "||                                      ||" << endl;
	cout << "|| Asal            : JAKARTA            ||" << endl;
	cout << "|| Tujuan          : " << tujuan << "		||" << endl;
	cout << "|| Harga           : Rp " << harga << "		||" << endl;
	cout << "|| Jumlah Tiket    :    " << tiket << "		||" << endl;
	cout << "||                 : ------------- X    ||" << endl;
	cout << "|| Total Harga     : Rp " << total << "		||" << endl;
	cout << "|| Pembayaran      : Rp " << bayar << "		||" << endl;
	cout << "||                 : ------------- -    ||" << endl;
	cout << "|| Kembalian       : Rp " << kembali << "		||" << endl;
	cout << "||                                      ||" << endl;
	cout << "==========================================" << endl;

	cout << "\ningin memesan tiket lagi? ( Y / T ) : ";
	cin >> jawab;

	if ( jawab == 'Y' || jawab == 'y')
	{
		goto daftar;
	}
	else
	{
		cout << "\nTERIMA KASIH SUDAH MEMESAN TIKET KAMI." << endl;
		cout << "\nsemoga selamat sampai tujuan..." << endl; 
	}

 return 0;

}
