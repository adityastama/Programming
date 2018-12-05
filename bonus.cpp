#include <iostream>
using namespace std;

int main()
{
     int pilihan, harga, jumlah, total_pembelian;
     char a[20];

     cout << "===========TOKO BAROKAH===========" << endl;
     cout << "            PROMO BONUS            " << endl;
 
     cout << "\ntulis 1 untuk mendapat promo bonus : " << endl;
     cout << "\ntulis 2 untuk pembelian normal : " << endl;
     cout << "\nmasukan pilihan anda : ";
     cin >> pilihan;

     cout << "\nAnda mau beli apa ? : ";
     cin >> a;

     cout << "\nharganya : ";
     cin >>harga;

     cout << "jumlahnya : ";
     cin >> jumlah;
     
     total_pembelian = harga * jumlah;
     cout << "\nTOTAL PEMBELIAN ANDA = " << total_pembelian << endl;
     cout << "\n" << endl;
 
     switch(pilihan)
     {
          case 1:
               if(total_pembelian >= 500000 && jumlah > 5)
               {
                    cout << "Selamat anda mendapat bonus -setrika-\n";
                    break;
               }
               if(total_pembelian >= 100000 && jumlah > 3)
               {
                    cout << "Selamat anda mendapat bonus -Payung\n";
                    break;
               }
                if (total_pembelian >= 50000 || jumlah > 2)
               {
                    cout << "Anda mendapat bonus -Ballpoint-\n";
                    break;
               }

               else
               {
                    cout << "Anda tidak mendapat bonus\n"; 
                    break;
               }
          case 2:
               {
               cout << "\nterima kasih sudah berbelanja disini......" << endl;
               break;
               }
         
   
          default:
               cout << "Error";  
     }
 
     return 0;
}
