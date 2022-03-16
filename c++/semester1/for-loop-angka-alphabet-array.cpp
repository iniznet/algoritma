#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int angka[5] = {1, 2, 3, 4, 5};
    char alphabet[5] = {'A', 'B', 'C', 'D', 'E'};

    for ( int i = 0; i < 5; i++ ) {
        cout << angka[i] << alphabet[i] << " ";
    }
    
    cout << endl;
    
    for ( int i = 4; i >= 0; i-- ) {
        cout << angka[i] << alphabet[i] << " ";
    }

    cout << endl;

    for ( int i = 0; i < 5; i++ ) {
        cout << alphabet[i] << angka[i] << " ";
    }
    
    cout << endl;

    for ( int i = 4; i >= 0; i-- ) {
        cout << alphabet[i] << angka[i] << " ";
    }

    getch();
}