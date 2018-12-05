#include <iostream>
using namespace std;

int main()
{
    int pilihan, tahun;

    cout << "\nPROGRAM PENGHITUNG TAHUN\n" << endl;

    program:
    cout<<"1. menentukan tahun kabisat" << endl;
    cout<<"\nasukkan kodenya : ";
    cin>>pilihan;
    if (pilihan != 1)
    	{
    		cout << "\ntolong masukan angka 1" << endl;
    		goto program;
    	}

    cout << "\n INI TAHUN KABISAT JIKA : \n" << endl;
    cout << "- tahun habis jika dibagi 4" << endl;
    cout << "- bukan tahun yang habis jika dibagi 100" << endl;
    cout << "- tahun tidak habis dibagi 400" << endl;
    cout << "- kecuali habis dibagi 100 & habis dibagi 400" << endl;

    cout << "\nMASUKAN TAHUN : ";
    cin >> tahun;

    switch(pilihan)
    {
      case 1:
      if (tahun%400==0) {
        cout<<"\nTahun "<<tahun<<" adalah Tahun Kabisat";
        break;
    }
    else
        if (tahun%400>0 && tahun%100==0) {
        cout<<"\nTahun "<<tahun<<" Bukan Tahun Kabisat";
    	break;
    	}
    else
        if (tahun%400>0 && tahun%100>0 && tahun%4==0) {
        cout<<"\nTahun "<<tahun<<" adalah Tahun Kabisat";
    	break;
    	}
    else
    if (tahun%4>0 && tahun%100>0 && tahun%400>0) {
        cout<<"\nTahun "<<tahun<<" Bukan Tahun Kabisat";
    	break;
    	}
    default:
               cout << "\nError";  
    	break;
    }
    
	

    
    return 0;
}
