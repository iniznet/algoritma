#include <iostream>
#include <conio.h>

using namespace std;

main() {
	
	string nama;
	int nomor, harga, jumlah, total;
	
	cout << "Transaksi Penjualan" << endl;
	cout << "Nomor Transaksi: "; cin >> nomor;
	cout << "Nama Barang: "; cin >> nama;
	cout << "Harga Barang: "; cin >> harga;
	cout << "Jumlah Beli: "; cin >> jumlah;
	
	total = harga * jumlah;
	
	cout << "Struk Pembayaran" << endl;
	cout << "Nomor Transaksi: " << nomor << endl;
	cout << "Nama Barang: " << nama << endl;
	cout << "Harga Barang: " << harga << endl;
	cout << "Jumlah Beli: " << jumlah << endl;
	cout << "Total Harga: " << total << endl;
	
	getch();
}
