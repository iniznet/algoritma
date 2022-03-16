#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
	
	int bils[3];
	
	cout << "------------ Menentukan Bilangan Positif atau Negatif -------------" << endl;
	
	// Loop 3 kali dengan for loop + initiator variable
	for (int i = 0; i < 3; i++) {
		printf("Masukkan Bilangan-%d: ", i+1);
		scanf("%d", &bils[i]);
	}
	
	cout << "------------ Hasil -------------" << endl;
	
	for (int i = 0; i < 3; i++) {
		char msg[25]; // Variable karakter dengan maksimal 25 huruf
		
		if ( bils[i] > 0 ) {
			sprintf( msg, "%d: Bilangan POSITIF", i + 1 );
		}
		else if (bils[i] == 0 ) {
			sprintf( msg, "%d: Bilangan NOL", i + 1 );
		}
		else {
			sprintf( msg, "%d: Bilangan NEGATIF", i + 1 );
		}
		
		printf( "Bilangan-%s\n", msg );
	}
	
	getch();
}
