#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char kode;
    int x, y;

    cout << " * Latihan While-Loop Deret Ganjil-Genap * " << endl;
    cout << "===========================================" << endl;

    cout << " Masukkan maksimum angka deret: ";
    cin >> x;

    if ( !cin.good() ) {
        system("cls");
        cin.clear();
        cin.ignore(256, '\n'); // Abaikan baris baru bila user nantinya menekan tombol y
        main();
    }

    cout << "===========================================" << endl;
    cout << " Deret: ";

    y = 1;
    while ( y <= x ) {
        cout << y << " ";
        y++;
    }

    cout << endl;
    cout << " Deret Ganjil\tGenap" << endl;

    y = 1;
    while ( y <= x ) {
        // Ganjil
        if ( (y % 2) > 0 ) {
            cout << "\t" << y;
        }

        // Genap
        if ( (y % 2) == 0 ) {
            cout << "\t" << y;
            cout << endl;
        }

        y++;
    }

    // Beri baris baru bila angka input x adalah ganjil
    if ( (x % 2) > 0 ) {
        cout << endl;
    }

    cout << "*******************************************" << endl;

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