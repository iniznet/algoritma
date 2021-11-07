#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main() {
    string namaBulan;
    int angkaBulan, hari, tahun;
    char kode;

    printf( "\t\t\tHari Bulan \
    \n------------------------------------------------------------------ \
    \n 1. Januari \t 4. April \t 7. Juli \t 10. Oktober \
    \n 2. Februari \t 5. Mei \t 8. Agustus \t 11. November \
    \n 3. Maret \t 6. Juni \t 9. September \t 12. Desember \
    \n------------------------------------------------------------------\n" );
    cout << " Masukkan angka tahun\t\t: ";
    cin >> tahun;
    cout << " Masukkan angka bulan [1..12]\t: ";
    cin >> angkaBulan;

    switch (angkaBulan) {
        case 1:
            namaBulan = "Januari";
            hari = 31;
            break;
        case 2:
            namaBulan = "Februari";
            if ( tahun % 100 == 0 && tahun % 400 == 0 ) {
                hari = 29;
            } else {
                hari = 28;
            }
            break;
        case 3:
            namaBulan = "Maret";
            hari = 31;
            break;
        case 4:
            namaBulan = "April";
            hari = 30;
            break;
        case 5:
            namaBulan = "Mei";
            hari = 31;
            break;
        case 6:
            namaBulan = "Juni";
            hari = 30;
            break;
        case 7:
            namaBulan = "Juli";
            hari = 31;
            break;
        case 8:
            namaBulan = "Agustus";
            hari = 31;
            break;
        case 9:
            namaBulan = "September";
            hari = 30;
            break;
        case 10:
            namaBulan = "Oktober";
            hari = 31;
            break;
        case 11:
            namaBulan = "November";
            hari = 30;
            break;
        case 12:
            namaBulan = "Desember";
            hari = 31;
            break;
        default:
            cout << " Angka yang anda masukkan tidak ada di daftar!" << endl << " Ingin mengulangi? [y/N]";
            kode = getch();

            if ( kode == 'y' ) {
                system("cls"); // Hapus isi terminal
                main(); // Panggil fungsi main kembali
            } else {
                return 0; // keluar dari aplikasi
            }
            break;
    }

    
    cout << "\n Ada " << hari << " hari pada bulan " << namaBulan << " tahun " << tahun << endl;

    cout << endl << " Ingin mencari bulan lain? [y/N]";
    kode = getch();

    if ( kode == 'y' ) {
        system("cls");
        main();
    } else {
        return 0;
    }
}