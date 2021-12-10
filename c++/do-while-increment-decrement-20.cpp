#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int x = 100;
    int y = 20;

    cout << " * Latihan Do-While * " << endl;
    cout << "===================" << endl;

    do {
        cout << " " << x << " " << y;
        x -= 20;
        y += 20;
    } while ( x >= 20 && y <= 100 );

    getch();
}