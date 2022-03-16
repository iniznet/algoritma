#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int ulangi();

main() {
    int menu;

    cout << " * Menu Makanan dan Minuman * " << endl;

    printf( " ============================== \
    \n 1. Nasi Goreng - Rp. 10.000 \
    \n 2. Mie Goreng - Rp. 15.000 \
    \n 3. Bakso - Rp. 5.000 \
    \n 4. Es Jeruk - Rp. 3.000 \
    \n 5. Es Teh - Rp. 2.000 \
    \n ============================== \n" );

    cout << " Pilih menu: ";
    while ( true ) {
        cin >> menu;
        if ( cin && menu > 0 && menu < 6 ) {
            break;
        } else {
            cin.clear();
            cin.ignore(256, '\n');
            cout << " Tidak ada menu yang anda pilih, mohon pilih kembali" << endl;
            cout << " Pilih menu [1-5]: ";
        }
    }

    switch ( menu ) {
        case 1:
            goto nasi;
            break;
        case 2:
            goto mie;
            break;
        case 3:
            goto bakso;
            break;
        case 4:
            goto jeruk;
            break;
        case 5:
            goto teh;
            break;
        default:
            cout << " Menu yang anda pilih tidak ada";
            ulangi();
            break;
    }

    cout << "---------------------------" << endl;

    nasi:
        cout << " Anda memilih Nasi Goreng seharga Rp. 10.000";
        ulangi();
        return 0;
    mie:
        cout << " Anda memilih Mie Goreng seharga Rp. 15.000";
        ulangi();
        return 0;
    bakso:
        cout << " Anda memilih Bakso seharga Rp. 5.000";
        ulangi();
        return 0;
    jeruk:
        cout << " Anda memilih Es Jeruk seharga Rp. 3.000";
        ulangi();
        return 0;
    teh:
        cout << " Anda memilih Es Teh seharga Rp. 2.000";
        ulangi();
        return 0;
}

int ulangi() {
    char kode;

    getch();
    cout << endl << endl << " Ingin memesan lainnya? [y/N]: ";
    cin >> kode;

    if ( kode == 'y' || kode == 'Y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }
}