#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100; // Maksimal ukuran array
    int dataArray[MAX_SIZE];
    int evenNumbers[MAX_SIZE];
    int oddNumbers[MAX_SIZE];
    int totalNumbers = 0;
    int evenCount = 0;
    int oddCount = 0;
    int number;

    cout << "Masukkan angka (ketik -1 untuk berhenti): ";
    while (cin >> number && number != -1) {
        dataArray[totalNumbers++] = number;
        if (number % 2 == 0) {
            evenNumbers[evenCount++] = number;
        } else {
            oddNumbers[oddCount++] = number;
        }
    }

    cout << "Data Array : ";
    for (int i = 0; i < totalNumbers; ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < evenCount; ++i) {
        cout << evenNumbers[i] << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < oddCount; ++i) {
        cout << oddNumbers[i] << ", ";
    }
    cout << endl;

    return 0;
}
