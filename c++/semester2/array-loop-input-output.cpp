#include <iostream>
#include <conio.h>

using namespace std;

/**
 * Disini menggunakan fungsi sizeof sebagai bahan belajar untuk mencari ukuran panjang dari array
 * yang telah dibuat atau di masukkan untuk digunakan dalam deklarasi loop.
 * 
 * Dilakukan pembagian antara panjang array nilai dan urutan index nilai ke 0 untuk mendapatkan
 * ukuran panjang yang tepat karena satu angka integer mempresentasikan 4 byte sehingga 4 byte * panjang array = total byte
 * dengan demikian: (4 * 5) = (20 / 4) = 5
 */

int main()
{
    int nilai[5]; // panjang array nilai = 5
    int i;

    for (i = 0; i < sizeof(nilai) / sizeof(nilai[0]); i++)
    {
        cout << " " << "Nilai Array Index ke-" << i << ": ";
        cin >> nilai[i];
    }
    
    cout << endl << " Nilai Array: " << endl;
    cout << " ";

    for (i = sizeof(nilai) / sizeof(nilai[0]) - 1; i >= 0; i--)
    {
        cout << nilai[i] << " ";
    }

    getch();
}