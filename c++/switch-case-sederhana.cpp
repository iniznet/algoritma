#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char kode;

    cout << " Masukkan kode barang [A..C]: ";
    cin >> kode;

    switch (kode) {
        case 'A':
            cout << " Barang yang dipilih: Laptop - Rp8.500.000" << endl;
            break;
        case 'B':
              cout << " Barang yang dipilih: Handpone - Rp5.00.000" << endl;
            break;
        case 'C':
            cout << " Barang yang dipilih: Powerbank - Rp1.500.000" << endl;
            break;
        default:
            cout << " Kode yang anda masukkan tidak ada di daftar!" << endl;
            break;
    }

    getch();
}