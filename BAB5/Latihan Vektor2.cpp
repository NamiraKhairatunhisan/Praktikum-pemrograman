#include <iostream>
#include <vector>
#include <string>
using namespace std;

using pii = pair<string, int>;

void bersihkan(vector<pii>& v) {
    vector<pii> hasil;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].second > 0) {
            hasil.push_back(v[i]);
        }
    }
    v = hasil; 
}

void hapusDuplikat(vector<pii>& v) {
    vector<pii> hasil;

    for (int i = 0; i < v.size(); i++) {
        string nama = v[i].first;
        int harga = v[i].second;
        bool ditemukan = false;

        for (int j = 0; j < hasil.size(); j++) {
            if (hasil[j].first == nama) {
                hasil[j].second = harga;
                ditemukan = true;
                break;
            }
        }

        if (!ditemukan) {
            hasil.push_back(v[i]); 
        }
    }

    v = hasil;
}

void ringkasan(const vector<pii>& v) {
    if (v.empty()) {
        cout << "Tidak ada data." << endl;
        return;
    }

    int jumlah = v.size();
    int minHarga = v[0].second;
    int maxHarga = v[0].second;
    double total = 0;

    for (int i = 0; i < v.size(); i++) {
        int harga = v[i].second;
        if (harga < minHarga) minHarga = harga;
        if (harga > maxHarga) maxHarga = harga;
        total += harga;
    }

    double rata = total / jumlah;

    cout << "Jumlah barang unik : " << jumlah << endl;
    cout << "Harga minimum      : " << minHarga << endl;
    cout << "Harga maksimum     : " << maxHarga << endl;
    cout << "Rata-rata harga    : " << rata << endl;
}

int main() {
    vector<pii> data = {
        {"apel", 2000},
        {"jeruk", 1500},
        {"apel", -100},
        {"mangga", 3000},
        {"jeruk", 1500},
        {"pisang", 0},
        {"apel", 2500},
        {"mangga", 3000}
    };

    bersihkan(data);
    hapusDuplikat(data);
    ringkasan(data);

    return 0;
}
