#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
    int hari;

    cout << "Menentukan Hari dalam 1 minggu" << endl;
    cout << "============================" << endl;

    printf( "%d: Senin\t %d: Selasa\t %d: Rabu \
    \n%d: Kamis\t %d: Jum'at\t %d: Sabtu \
    \n%d: Minggu\n", 1, 2, 3 ,4 , 5, 6, 7 );

    cout << "============================" << endl;
    cout << "Masukkan Pilihan Anda [1..7]: ";
    cin >> hari;

    if ( hari == 1 ) {
        cout << "Senin" << endl;
    } else if ( hari == 2 ) {
        cout << "Selasa" << endl;
    } else if ( hari == 3 ) {
        cout << "Rabu" << endl;
    } else if ( hari == 4 ) {
        cout << "Kamis" << endl;
    } else if ( hari == 5 ) {
        cout << "Jum'at" << endl;
    } else if ( hari == 6 ) {
        cout << "Sabtu" << endl;
    } else if ( hari == 7 ) {
        cout << "Minggu" << endl;
    } else {
        cout << "Angka yang anda masukkan salah" << endl;
        getch();
        cout << endl;
        main(); // Memanggil fungsi ini kembali
    }

    getch();
}