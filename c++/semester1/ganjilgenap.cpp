#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int angka;

    cout << "Menentukan Bilangan Ganjil Genap" << endl;
    cout << "============================" << endl;
    
    cout << "Masukkan angka: "; cin >> angka;

    cout << "============================" << endl;

    if ( angka == 0 ) {
        cout << "Angka yang anda masukan NOL" << endl;
    } else if ( angka % 2 == 0 ) {
        cout << "Angka " << angka << ": Adalah bilangan GENAP" << endl;
    } else {
        cout << "Angka " << angka << ": Adalah bilangan GANJIL" << endl;
    }

    getch();
}