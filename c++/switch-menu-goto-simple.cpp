#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int menu;

    cout << " * Menu Makanan dan Minuman * " << endl;
    cout << "==============================" << endl;

    cout << "1. Nasi Goreng - Rp. 10.000";
    // Lianne tambahono dewe
    cout << "==============================" << endl;
    cout << " Pilih menu: ";
    cin >> menu;

    switch ( menu ) {
    case 1:
        goto nasi;
        break;
    default:
        cout << " Menu yang anda pilih tidak ada";
        break;
    }

    cout << endl;

    nasi:
        cout << " Anda memilih Nasi Goreng seharga Rp. 10.000";
        getch();

    getch();
}