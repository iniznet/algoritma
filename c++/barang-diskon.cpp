#include <iostream>
#include <conio.h>

using namespace std;

main() {
    char konfirmasi;
    int jumlah, harga, diskon, total, potongan, bersih = 0;

    cout << "Jumlah Barang\t: ";
    cin >> jumlah;
    cout << "Harga Barang\t: Rp. ";
    cin >> harga;
    cout << "Diskon\t\t: ";
    cin >> diskon;

    cout << "--------------------------------\n";

    if ( jumlah == 0 || harga == 0 ) {
        cout << "Jumlah barang atau harga barang yang ada masukkan tidak valid\n\n";
        getch();
        cout << "--------------------------------\n";
        main(); // Kembali ke awal
    }

    total = harga * jumlah;

    cout << "Total Harga\t: Rp. " << total << endl;

    if ( diskon > 0 ) {
        potongan = (total * diskon) / 100;
        cout << "Potongan Harga\t: Rp. " << potongan << endl;
    } else {
        cout << "Tidak ada diskon\n";
    }

    bersih = total - potongan;

    cout << "--------------------------------\n";

    cout << "Harga Bersih\t: Rp. " << bersih << endl;

    getch();

    cout << "\nIngin menghitung kembali? [Y/N]";
    konfirmasi = getch();

    // panggil fungsi main kembali jika user menekan y atau keluar dari program
    if ( konfirmasi == 'y' ) {
        cout << "\n\n--------------------------------\n";
        main(); // Kembali ke awal / memanggil fungsi kembali
    } else {
        return 0;
    }

}