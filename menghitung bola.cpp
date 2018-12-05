#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){

int x, jlh_anak;
cout <<"masukan jumlah bola dalam keranjang : ";
cin >> jlh_anak;
cout << "mari kita ambil bola sambil behitung mulai dari " << jlh_anak << endl;
cout << "mulai berhitung !" << endl;

for (x=jlh_anak; x > 0; x--){
	if (x > 1)
		cout << "jumlah bola ada " << x << "diambil satu tinggal " <<  x - 1<< endl;
	else if (x = 1)
		cout << "jumlah bola ada 1 diambil satu tinggal kranjangnya" << endl;
	}
	getch();
	return 0;
}
