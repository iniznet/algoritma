#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char kode, kategori;
    int nilai;

    cout << "\t* Pengkategorian Nilai *\n";
    cout << "--------------------------------------------\n";
    cout << " Masukkan nilai anda: ";
    cin >> nilai;

    cout << "--------------------------------------------\n";

    if ( nilai >= 90 && nilai <= 100 ) {
        kategori = 'A';
    } else if ( nilai >= 80 && nilai <= 100  ) {
        kategori = 'B';
    } else if ( nilai >= 65 && nilai <= 100  ) {
        kategori = 'C';
    } else if ( nilai >= 50 && nilai <= 100  ) {
        kategori = 'D';
    } else if ( nilai >= 0 && nilai <= 49 ) {
        kategori = 'E';
    }

    if ( kategori ) {
        cout << " Nilai anda termasuk pada kategori " << kategori << endl;
    } else {
        cout << " Maaf angka nilai yang anda masukkan tidak valid" << endl;
    }

    getch();
    cout << "\n Ingin memeriksa nilai lain? [y/N]: ";
    cin >> kode;

    if ( kode == 'y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }
}