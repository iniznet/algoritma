#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
    char kode;
    int menu, harga;
    string nama, barang;

    cout << "\t * Bengkel Ucup * " << endl;
    cout << "=====================================" << endl;

    cout << " Masukkan Nama Anda: ";
    cin >> nama;

    cout << endl << " Selamat datang " << nama << " di Bengkel Ucup" << endl << endl;
    cout << "----------------------------" << endl;
    printf( " Macam-macam barang: \
    \n 1. %s \
    \n 2. %s \
    \n 3. %s \
    \n 4. %s \
    \n 5. %s \
    ",
    // Variabel
    "Velg Racing - Rp. 100.000",
    "Spion - Rp. 80.000",
    "Knalpot 2 - Rp. 120.000",
    "Busi - Rp. 60.000",
    "Oli - Rp. 70.000" );
    cout << endl << "----------------------------" << endl;

    cout << " Pilih barang yang ingin dibeli [1-5]: ";
    while ( true ) {
        cin >> menu;
        if ( cin && menu > 0 && menu < 6 ) {
            break;
        } else {
            cout << " Anda tidak memilih barang apapun, mohon pilih kembali" << endl;
            cout << " Pilih barang yang ingin dibeli [1-5]: ";
            cin.clear();
            cin.ignore(256, '\n');
        }
    }

    switch ( menu ) {
        case 1:
            barang = "Velg Racing";
            harga = 100000;
            break;
        case 2:
            barang = "Spion";
            harga = 80000;
            break;
        case 3:
            barang = "Knalpot 2";
            harga = 120000;
            break;
        case 4:
            barang = "Busi";
            harga = 60000;
            break;
        case 5:
            barang = "Oli";
            harga = 70000;
            break;
    }

    cout << endl << " Barang yang dibeli\t: " << barang << endl;
    cout << " Harga Satuan\t\t: Rp " << harga;

    getch();
    cout << endl << "\n Ingin memeriksa barang lain? [y/N]: ";
    cin >> kode;

    if ( kode == 'y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }

}