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
    
    // create inverted rows of numbers from num
    for (int i = 0; i < rows; i++) {
        // create spacing new line
        for (int j = 0; j < i; ++j)
        {
            if ( max > 3 && max < 7 ) {
                cout << "    ";
            } else if ( max < 4 ) {
                cout << "   ";
            }
        }

        // find min number in row based on max
        int minNumberRow = findMin( minNum, max );
        // assign min number to minNum for later checking
        minNum = minNumberRow;
        // assign minNum to num
        num = minNum;

        // create numbers
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

    // create rows of numbers from num
    for (int i = 0; i < rows; i++) {
        // create spacing new line
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

        // create numbers
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