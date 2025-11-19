#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (data[j] < data[j - 1]) {   // ascending
                swap(data[j], data[j - 1]);
            }
        }
    }
}

int main() {
    int n, L, R;

    cin >> n >> L >> R;
    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int temp[1000];
    int idx = 0;

    for (int i = L; i <= R; i++) {
        temp[idx] = A[i];
        idx++;
    }

    bubble_sort(temp, R - L + 1);

    idx = 0;
    for (int i = L; i <= R; i++) {
        A[i] = temp[idx];
        idx++;
    }
    for (int i = 0; i < n; i++) {
        cout << A[i];
        if (i != n - 1) cout << ",";
    }

    return 0;
}
