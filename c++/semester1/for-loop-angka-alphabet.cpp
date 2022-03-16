#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int i;

    cout << "  For Loop Alphabet & Angka";
    cout << endl << "=============================" << endl;

    for ( i = 1; i <= 5; i++ ) {
        cout << " " << i * 3;
    }

    cout << endl;

    for ( i = 5; i > 0; i-- ) {
        cout << " " << i * 3;
    }

    cout << endl;

    for ( char a = 'A'; a <= 'E'; a++ ) {
        cout << " " << a;
    }

    cout << endl;

    for ( char a = 'E'; a >= 'A'; a-- ) {
        cout << " " << a;
    }

    cout << endl << "-----------------------------" << endl;

    i = 1;
    for ( char a = 'A'; a <= 'E'; a++ ) {
        cout << " " << i << a;
        i++;
    }

    cout << endl;

    i = 5;
    for ( char a = 'E'; a >= 'A'; a-- ) {
        cout << " " << i << a;
        i--;
    }

    cout << endl;

    i = 1;
    for ( char a = 'A'; a <= 'E'; a++ ) {
        cout << " " << a << i;
        i++;
    }

    cout << endl;

    i = 5;
    for ( char a = 'E'; a >= 'A'; a-- ) {
        cout << " " << a << i;
        i--;
    }

    getch();
}