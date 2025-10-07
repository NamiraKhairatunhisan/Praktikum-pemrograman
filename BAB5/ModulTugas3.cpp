#include <iostream>
using namespace std;

int main() {
    float A[3][3], inv[3][3];
    float det = 0;

    cout << "Masukkan elemen matriks 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    det = A[0][0]*(A[1][1]*A[2][2] - A[2][1]*A[1][2])
        - A[0][1]*(A[1][0]*A[2][2] - A[2][0]*A[1][2])
        + A[0][2]*(A[1][0]*A[2][1] - A[2][0]*A[1][1]);

    if (det == 0) {
        cout << "Matriks tidak memiliki invers (det = 0)." << endl;
        return 0;
    }

    inv[0][0] =  (A[1][1]*A[2][2] - A[2][1]*A[1][2]) / det;
    inv[0][1] = -(A[0][1]*A[2][2] - A[2][1]*A[0][2]) / det;
    inv[0][2] =  (A[0][1]*A[1][2] - A[1][1]*A[0][2]) / det;
    inv[1][0] = -(A[1][0]*A[2][2] - A[2][0]*A[1][2]) / det;
    inv[1][1] =  (A[0][0]*A[2][2] - A[2][0]*A[0][2]) / det;
    inv[1][2] = -(A[0][0]*A[1][2] - A[1][0]*A[0][2]) / det;
    inv[2][0] =  (A[1][0]*A[2][1] - A[2][0]*A[1][1]) / det;
    inv[2][1] = -(A[0][0]*A[2][1] - A[2][0]*A[0][1]) / det;
    inv[2][2] =  (A[0][0]*A[1][1] - A[1][0]*A[0][1]) / det;

    cout << "\nInvers matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << inv[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
