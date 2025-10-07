#include <iostream>
using namespace std;

int sum(const int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int minVal(const int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int maxVal(const int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

double mean(const int a[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    double rata = total / n;
    return rata;
}

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Jumlah      : " << sum(a, n) << endl;
    cout << "Nilai Min   : " << minVal(a, n) << endl;
    cout << "Nilai Max   : " << maxVal(a, n) << endl;
    cout << "Rata-rata   : " << mean(a, n) << endl;

    return 0;
}
