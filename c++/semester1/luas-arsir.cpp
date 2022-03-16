#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char konfirmasi;
    const float phi = 3.14;
    float r, LL;
    int p, l, LPP, LA;

    cout << "  * Luas Lingkaran * \n";
    cout << " Masukkan Jari-jari\t: ";
    cin >> r;
    LL = phi * ( r * r );

    cout << " Luas Lingkaran adalah " << LL << endl;
    cout << "--------------------------------\n";

    cout << " * Luas Persegi Panjang * \n";
    cout << " Masukkan Panjang\t: ";
    cin >> p;
    cout << " Masukkan Lebar\t\t: ";
    cin >> l;

    LPP = p * l;
    LA = LL - LPP;

    cout << " Luas Persegi Panjang adalah " << LPP << endl;
    cout << "--------------------------------\n";

    cout << " Jadi luas daerah yang terarsir adalah " << LA << endl;

    // Tunggu input dari user sebelum melanjutkan ke konfirmasi
    getch();

    cout << "\n Ingin menghitung kembali? [Y/N]";
    konfirmasi = getch();

    // panggil fungsi main kembali jika user menekan y atau keluar dari program
    if ( konfirmasi == 'y' ) {
        cout << "\n\n--------------------------------\n";
        main(); // Kembali ke awal / memanggil fungsi kembali
    } else {
        return 0;
    }
}