#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
	char nama[25], nim[10];
	int uts, uas;
	float rata;
	
	cout << "Nama	: "; cin >> nama;
	cout << "NIM	: "; cin >> nim;
	cout << "UTS	: "; cin >> uts;
	cout << "UAS	: "; cin >> uas;
	
	rata = (uts + uas) / 2;
	
	printf( "-------------------------------- \
	\nNama\t\t: %s \
	\nNIM\t\t: %s \
	\nUTS\t\t: %d \
	\nUAS\t\t: %d \
	\n-------------------------------- \
	\nNilai Rata-rata\t: %f",
	nama, nim, uts, uas, rata
	);
	
	getch();
}
