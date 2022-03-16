#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char kode;
    int awal, awal_ganjil, akhir;

    cout << "\t* Deret Bilangan Ganjil ke Genap *" << endl;
    cout << "================================================" << endl;
    cout << " Masukkan angka awal: ";
    cin >> awal;
    cout << " Masukkan angka akhir: ";
    cin >> akhir;
    cout << "================================================" << endl;

    awal_ganjil = awal; // Disimpan untuk deret genap

    cout << " Deret Ganjil: ";
    for ( awal; awal <= akhir; awal++ ) {
        if ( awal % 2 != 0 ) {
            cout << awal << " ";
        }
    }

    cout << endl;

    cout << " Deret Genap: ";
    awal = awal_ganjil;
    for ( awal; awal <= akhir; awal++ ) {
        if ( awal % 2 != 0 ) {
            cout << ( awal * 2 ) << " ";
        }
    }

    getch();
    cout << endl << "\n Ingin memeriksa nilai lain? [y/N]: ";
    cin >> kode;

    if ( kode == 'y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }
}