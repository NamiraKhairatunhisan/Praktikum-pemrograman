#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct Karyawan {
    string nama;
    int umur;
    string nik;
    string jabatan;
};

const int jmlhKaryawan = 100;
Karyawan karywn[jmlhKaryawan];
int count = 0;
int opsi;
string cariNik;

void TampilData() {}
void TambahData() {}
void EditData() {}
void HapusData() {}

int main()
{

    int count = 0;
    ifstream inputFile("karyawan.txt");
    if (!inputFile) {
        cout << "tidak dapat menemukan file!" << endl;
        return 1;
    }

    string line;

    while (getline(inputFile, line) && count < jmlhKaryawan) {
        stringstream ss(line);
        ss >> karywn[count].nama >> karywn[count].umur >> karywn[count].nik >> karywn[count].jabatan;
        count++;
    }

    inputFile.close();

    while (true) {
        cout << "-----------------------------------------------------------------------------------------" << endl;
        cout << "pilih opsi(angka): " << endl;
        cout << "1) Tampilkan seluruh data karyawan" << endl;
        cout << "2) Tambah karyawan" << endl;
        cout << "3) edit karyawan" << endl;
        cout << "4) hapus karyawan" << endl << endl;

        cin >> opsi;

        switch (opsi) {
        case 1://seluruh data

            cout << "data karyawan: " << endl;
            TampilData();

            break;

        case 2://tambah data
            if (count + 1 < jmlhKaryawan) {
                TambahData();
                count++;
            }
            else
                cout << "data penuh" << endl;

            cout << endl;
            break;

        case 3://edit
            cout << "masukkan NIK: " << endl;
            cin >> cariNik;

            EditData();
            break;

        case 4: //hapus
            cout << "masukkan NIK: " << endl;
            cin >> cariNik;

            HapusData();
            break;

        default:
            cout << "invalid" << endl << endl;
            break;
        }
    }

    return 0;
}


void TampilData() {
    for (int i = 0; i < count; i++) {
        cout << "Karyawan " << i + 1 << ": " << endl;
        cout << "Nama: " << karywn[i].nama << endl;
        cout << "Umur: " << karywn[i].umur << endl;
        cout << "NIK: " << karywn[i].nik << endl;
        cout << "Jabatan: " << karywn[i].jabatan << endl << endl;
    }
}

void TambahData() {
    cout << "Masukkan nama: " << endl;
    cin >> karywn[count].nama;
    cout << "Masukkan umur: " << endl;
    cin >> karywn[count].umur;
    cout << "Masukkan NIK: " << endl;
    cin >> karywn[count].nik;
    cout << "Masukkan jabatan: " << endl;
    cin >> karywn[count].jabatan;
}

void EditData() {
    cout << "masukkan NIK: " << endl;
    cin >> cariNik;

    for (int i = 0; i < count; i++) {
        if (cariNik == karywn[i].nik) {
            cout << "masukkan data baru" << endl;
            cout << "Masukkan nama: " << endl;
            cin >> karywn[i].nama;
            cout << "Masukkan umur: " << endl;
            cin >> karywn[i].umur;
            cout << "Masukkan NIK: " << endl;
            cin >> karywn[i].nik;
            cout << "Masukkan jabatan: " << endl;
            cin >> karywn[i].jabatan;
        }
    }
}
void HapusData() {
    for (int i = 0; i < count; i++) {
        if (cariNik == karywn[i].nik) {
            for (int j = i; j < count - 1; j++) {
                karywn[j] = karywn[j + 1];
            }
            count -= 1;
            cout << "Data terhapus!" << endl << endl;
        }
    }
}
