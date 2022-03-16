#include <iostream>
#include <conio.h>

using namespace std;

main() {
    int berat;

    cout << " * Penentu Berat Badan * " << endl;
    cout << " Masukkan berat badan anda: ";
    cin >> berat;

    switch (berat) {
        case 0 ... 25:
            cout << " Anda termasuk dalam kategori: berat badan kurus" << endl;
            break;
        case 26 ... 40:
            cout << " Anda termasuk dalam kategori: berat badan sedang" << endl;
            break;
        case 41 ... 55:
            cout << " Anda termasuk dalam kategori: berat badan gemuk" << endl;
            break;
        default:
            cout << " Anda termasuk dalam kategori: Berat badan jumbo" << endl;
            break;
    }

    getch();
}