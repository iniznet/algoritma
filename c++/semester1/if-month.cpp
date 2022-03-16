#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
    int bulan;

    cout << "Menentukan Bulan dalam 1 tahun" << endl;
    cout << "============================" << endl;

    printf( "%d: Januari\t %d: Februari\t %d: Maret \
    \n%d: April\t %d: Mei\t\t %d: Juni \
    \n%d: Juli \t %d: Agustus\t %d: September \
    \n%d: Oktober\t %d: November\t %d: Desember \n", 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10, 11, 12 );

    cout << "============================" << endl;
    cout << "Masukkan Pilihan Anda [1..12]: ";
    cin >> bulan;

    if ( bulan == 1 ) {
        cout << "Januari" << endl;
    } else if ( bulan == 2 ) {
        cout << "Februari" << endl;
    } else if ( bulan == 3 ) {
        cout << "Maret" << endl;
    } else if ( bulan == 4 ) {
        cout << "April" << endl;
    } else if ( bulan == 5 ) {
        cout << "Mei" << endl;
    } else if ( bulan == 6 ) {
        cout << "Juni" << endl;
    } else if ( bulan == 7 ) {
        cout << "Juli" << endl;
    } else if ( bulan == 8 ) {
        cout << "Agustus" << endl;
    } else if ( bulan == 9 ) {
        cout << "September" << endl;
    } else if ( bulan == 10 ) {
        cout << "Oktober" << endl;
    } else if ( bulan == 11 ) {
        cout << "November" << endl;
    } else if ( bulan == 12 ) {
        cout << "Desember" << endl;
    } else {
        cout << "Angka yang anda masukkan salah" << endl;
        getch();
        cout << endl;
        main(); // Memanggil fungsi ini kembali
    }

    getch();
}