#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main() {
	string nama, tgl, alamat, hobi;
	
	cout << "Input Nama Anda: ";
	getline( cin, nama );
	
	cout << "Input tanggal lahir Anda: ";
	getline( cin, tgl );
	
	cout << "Input alamat Anda: ";
	getline( cin, alamat );
	
	cout << "Input hobi Anda: ";
	getline( cin, hobi );
	
	printf( "\tIdentitas\n-------------------------------- \
	\nNama\t\t: %s\
	\nTgl Lahir\t: %s \
	\nAlamat\t\t: %s \
	\nHobi\t\t: %s",
	nama.c_str(), tgl.c_str(), alamat.c_str(), hobi.c_str()
	);
}
