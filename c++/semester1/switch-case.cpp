#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {

    char kode;
    string nama, harga;

    printf( "\tKode Barang \t\t Nama Barang \t\t Harga Barang \t\t \
    \n---------------------------------------------------------------------------------- \
    \n\t A \t\t\t Laptop \t\t 8.500.000 \
    \n\t B \t\t\t Handpone \t\t 5.000.000 \
    \n\t C \t\t\t Powerbank \t\t 1.500.000 \
    \n----------------------------------------------------------------------------------\n" );

    cout << " Masukkan kode barang [A..C]: ";
    cin >> kode;

    switch (kode) {
        case 'A':
            nama = "Laptop";
            harga = "Rp8.500.000";
            break;
        case 'B':
            nama = "Handpone";
            harga = "Rp5.000.000";
            break;
        case 'C':
            nama = "Powerbank";
            harga = "Rp1.500.000";
            break;
        default:
            cout << " Kode yang anda masukkan tidak ada di daftar!" << endl << " Ingin mengulangi? [y/N]";
            kode = getch();

            if ( kode == 'y' ) {
                system("cls"); // Hapus isi terminal
                main(); // Panggil fungsi main kembali
            } else {
                return 0;
            }

            break;
    }

    cout << " Barang yang dipilih: " << nama << " - " << harga << endl;
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