#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

main() {
	char nama[25];
	int kode, harga, jumlah, total;
	time_t rawtime;
	struct tm *infotime;
	char waktu[80];
	
	cout << "\t* Transaksi Penjualan *\n";
	cout << "------------------------------------\n";
	
	// input
	cout << "Nama Barang \t: "; cin >> nama;
	cout << "Harga Barang \t: "; cin >> harga;
	cout << "Jumlah Beli \t: "; cin >> jumlah;
	
	cout << "------------------------------------\n" << endl;
	
	// process
	time( &rawtime ); // atur waktu ke dalam variabel yang di referensikan
	infotime = localtime( &rawtime ); // ambil waktu komputer lokal
	strftime(waktu, 80, "%d-%b-%Y %H:%M:%S", infotime); // format tanggal & waktu
	
	srand(time(0)); // menggunakan waktu saat ini agar kode acak terus berubah setiap di run
	kode = rand(); // membuat nomor transaksi secara otomatis
	
	total = harga * jumlah; // mentotalkan
	
	// output
	cout << "\t* Struk Pembayaran *";
	cout << "\n////////////////////////////////////\n";
	
	printf( "Tanggal\t\t : %s \
	\nNomor Transaksi\t : %d \
	\nNama Barang\t : %s \
	\nHarga Barang\t : %d \
	\nJumlah Beli\t : %d \
	\nTotal Harga\t : %d",
	waktu, kode, nama, harga, jumlah, total);
	
	cout << "\n/////////////////////////////////////\n";
    cout << "\t~~ Terimakasih ~~";
	
	getch();
}
