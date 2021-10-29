#include <iostream>
#include <conio.h>

using namespace std;

main() {
    string persen;
    int total, potongan, hasil;

    cout << "Menentukan potongan harga" << endl;
    cout << "============================" << endl;

    cout << "Masukkan Total Pembayaran Anda: ";
    cin >> total;

    if ( total >= 100000 ) {
        persen = "20%";
        potongan = total * 0.20;
    } else {
        persen = "5%";
        potongan = total * 0.05;
    }

    hasil = total - potongan;

    cout << "============================" << endl;

    cout << "Total Pembelian\t\t\t: Rp. " << total << endl;
    cout << "Besarnya Potongan " << persen << " \t\t: Rp. " << potongan << endl;
    cout << "Jumlah yang harus dibayarkan\t: Rp. " << hasil << endl;

    getch();
}