#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif (<200): ";
    cin >> n;

    if (n <= 1) {
        cout << "Bukan prima";
    } 
    else if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13) {
        cout << "Prima";
    }
    else if (n % 2 == 0) {
        cout << "Bukan prima";
    }
    else if (n % 3 == 0) {
        cout << "Bukan prima";
    }
    else if (n % 5 == 0) {
        cout << "Bukan prima";
    }
    else if (n % 7 == 0) {
        cout << "Bukan prima";
    }
    else if (n % 11 == 0) {
        cout << "Bukan prima";
    }
    else if (n % 13 == 0) {
        cout << "Bukan prima";
    }
    else {
        cout << "Prima";
    }

    return 0;
}
