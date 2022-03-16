#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
    int A[12] = { 12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 14 };
    int B[12] = {0}, C[12];

    int i;

    cout << "A = ";
    for (i = 0; i < 12; i++) {
        cout << A[i] << " ";
        if ( A[i] % 2 == 0 ) {
            B[i] = A[i];
        } else {
            C[i] = A[i];
        }
    }

    // print B and C
    cout << endl << "Hasil Array B" << endl;
    for ( i = 0; i < 12; i++ ) {
        cout << B[i] << " ";
    }

    cout << endl << "Hasil Array C" << endl;
    for ( i = 0; i < 12; i++ ) {
        cout << C[i] << " ";
    }

    getch();
}