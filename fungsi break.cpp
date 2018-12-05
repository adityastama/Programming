#include <iostream>
using namespace std;

int main()
{
    /*BREAK
      digunakan untuk menghentikan perulangan
      meskipun syarat perulangan masih terpenuhi */

    int jumlah = 0;

    cout << "\nCONTOH PROGRAM BREAK MENINGKAT SAMPAI ANGKA 10" << endl;
    cout << "masukan angka : ";
    cin >> jumlah;

    for (int a = 1; a <= jumlah; a++)
    {
        if (a > 10)
        break; //angka akan berhenti saat sampai 10

        cout << a << endl;
    }

    cout << "\nkita cuma hitung sampai 10 BRO" << endl;
    return 0;
}







