#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char kode;
    int awal, akhir;

    cout << " * Deret Bilangan Ganjil *" << endl;
    cout << "============================" << endl;
    cout << " Masukkan angka awal: ";
    cin >> awal;
    cout << " Masukkan angka akhir: ";
    cin >> akhir;
    cout << "============================" << endl;

    cout << " Deret: ";
    for ( awal; awal <= akhir; awal++ ) {
        if ( awal % 2 != 0 ) {
            cout << awal << " ";
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