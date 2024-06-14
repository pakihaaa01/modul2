#include <iostream>
using namespace std;

int main() {
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran dimensi x: ";
    cin >> x_size;
    cout << "Masukkan ukuran dimensi y: ";
    cin >> y_size;
    cout << "Masukkan ukuran dimensi z: ";
    cin >> z_size;

    // Deklarasi array dinamis
    int ***arr = new int**[x_size];
    for (int x = 0; x < x_size; x++) {
        arr[x] = new int*[y_size];
        for (int y = 0; y < y_size; y++) {
            arr[x][y] = new int[z_size];
        }
    }

    // Input elemen
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
            cout << endl;
        }
        cout << endl;
    }

    // Output Array
    cout << "Data Array:" << endl;
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;

    // Tampilan array
    cout << "Tampilan Array:" << endl;
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Dealokasi memori
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            delete[] arr[x][y];
        }
        delete[] arr[x];
    }
    delete[] arr;

    return 0;
}
