#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

main() {
    string norek, nama, alamat, jenis;
    int dana, cicilan1, cicilan2, tunggakan;
    char kode;

    cout << "**************************************************\n";
    cout << "\tPenerimaan Angsuran Nasabah\n";
    cout << "**************************************************\n";

    cout << " Masukkan No Rek\t: ";
    getline( cin, norek ); // Menggunakan string karena bila terlalu panjang akan merusak aplikasi
    cout << " Masukkan Nama\t\t: ";
    getline( cin, nama );
    cout << " Alamat Nasabah\t\t: ";
    getline( cin, alamat );
    cout << " Masukkan Jenis Kredit\t: ";
    cin >> jenis;
    cout << " Masukkan Dana\t\t: Rp";
    cin >> dana;
    cout << " Masukkan Cicilan-1\t: Rp";
    cin >> cicilan1;
    cout << " Masukkan Cicilan-2\t: Rp";
    cin >> cicilan2;
    cin.ignore(256, '\n'); // Abaikan baris baru bila user nantinya menekan tombol y

    tunggakan = dana - (cicilan1 + cicilan2);
    system("cls"); // Hapus isi terminal sebelum menunjukkan output akhir
    cout << "**************************************************\n";
    cout << "\tPenerimaan Angsuran Nasabah\n";
    cout << "**************************************************\n";

    printf( " No Rek\t\t\t: %s \
    \n Nama Nasabah\t\t: %s \
    \n Alamat Nasabah\t\t: %s \
    \n Jenis Kredit\t\t: %s \
    \n Dana\t\t\t: Rp%d \
    \n Cicilan Pertama\t: Rp%d \
    \n Cicilan Kedua\t\t: Rp%d \
    \n Tunggakan\t\t: Rp%d \n", norek.c_str(), nama.c_str(), alamat.c_str(), jenis.c_str(), dana, cicilan1, cicilan2, tunggakan );

    cout << "**************************************************\n";
    getch();

    cout << endl << " Ingin mengulangi? [y/N]";
    kode = getch();

    if ( kode == 'y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }

}