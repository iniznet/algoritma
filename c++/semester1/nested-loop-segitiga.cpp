#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char kode;
    int tinggi;

    cout << " * Program Segitiga * " << endl;
    cout << " Segitiga Siku=siku Rata Kanan " << endl;
    cout << "==================================" << endl;
    
    cout << " Masukkan Tinggi Segitiga: ";
    cin >> tinggi;

    // Ulangi bila inputan yg dimasukkan bukan angka
    if ( !cin.good() ) {
        system("cls");
        cin.clear();
        cin.ignore(256, '\n');
        main();
    }

    for ( int i = 1; i <= tinggi; i++ ) {
        for ( int j = i; j < tinggi; j++ ) {
            cout << " ";
        }
        for ( int j = 1; j <= i; j++ ) {
            cout << "*";
        }
        cout << endl;
    }
    
    getch();
    cout << endl << "Ingin memeriksa nilai lain? [y/N]: ";
    cin >> kode;

    if ( kode == 'y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }
}