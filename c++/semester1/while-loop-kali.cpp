#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int i = 1; // angka awal
    int penambahan = 0; // penambahan awal

    cout << " * Latihan While Loop Sederhana * " << endl;
    cout << "----------------------------------" << endl;
    
    while ( i <= 5 ) {
        cout << " " << i << " " << i * 2; // tampilkan i sebelum dan i sesudah dengan dikali 2
        i++;
        if ( i > 5 ) {
            cout << " " << i;
        }
    }

    cout << endl;

    i = 1; // perbarui angka kembali ke 1
    while ( i <= 5 ) {
        cout << " " << i << " " << i + penambahan; // tampilkan i sebelum dan i sesudah dengan ditambah variabel penambahan
        i++;
        penambahan++; // Tambahkan +1
    }

    getch();
}