#include <iostream>
#include <conio.h>

using namespace std;


int findMin( int num, int max ) {
    int result = 0;
    
    for (int i = 0; i < max; i++) {
        result = num -= 2;
    }

    return result;
}

main() {
    cout << " * Tugas Akhir - Deret * " << endl;
    cout << "==============================" << endl;

    int rows = 4;

    int max = 7;
    int num = 31;
    int minNum = num; // duplicate num
    
    // buat inverted baris segitiga
    for (int i = 0; i < rows; i++) {
        // tambah spasi
        for (int j = 0; j < i; ++j)
        {
            if ( max > 3 && max < 7 ) {
                cout << "    ";
            } else if ( max < 4 ) {
                cout << "   ";
            }
        }

        // cari batas minimum dari num berdasarkan max
        int minNumberRow = findMin( minNum, max );
        // simpan hasil minNumberRow ke minNum untuk di cek nanti
        minNum = minNumberRow;
        // salin hasil ke num
        num = minNum;

        // tampilkan angka
        for (int j = 0; j < max; j++) {
            num+=2;
            cout << num << " ";

            if ( max == 3 ) {
                cout << " ";
            }
        }

        max-=2;
        cout << endl;
    }

    cout << endl;

    max = 1;
    num = 1;

    // buat segitiga normal
    for (int i = 0; i < rows; i++) {
        // tambahkan spasi
        for (int j = 0; j < rows - i; ++j)
		{
            if ( max < 5 ) {
                cout << "  ";
            } else if ( max == 5 ) {
                cout << "  ";
            } else {
			    cout << "";
            }
		}

        // tampilkan angka
        for (int j = 0; j < max; j++) {
            cout << num << " ";

            if ( max == 3 ) {
                cout << " ";
            }

            num+=2;
        }
        cout << endl;
        max+=2;
    }

    getch();
}