#include<iostream>
using namespace std;

int totalHadir = 0;

void UpdateTotal(int n[], int jmhs){
    for(int i = 0; i < jmhs; i++){
        totalHadir += n[i]; 
    }
}
double Rasio(int totalHadir, int totalPert){
    return (double)totalHadir / totalPert * 100.0;
}

void Tampilkan(int totalPert, double persen){
    cout << "total kehadiran kelas: " << totalHadir 
         << " dari " << totalPert << endl;
    cout << "persentase kehadiran: " << persen << "%" << endl;
}

int main(){
    int jmlhM, pertemuan;

    cout << "jumlah mahasiswa: ";
    cin >> jmlhM;

    int kehadiran[jmlhM];

    cout << "total pertemuan: ";
    cin >> pertemuan;

    int totalPertemuan = jmlhM * pertemuan;

    for(int i = 0; i < jmlhM; i++){
        cout << "kehadiran mahasiswa ke-" << i + 1 << ": ";
        cin >> kehadiran[i];
    }

    UpdateTotal(kehadiran, jmlhM);
    double persen = Rasio(totalHadir, totalPertemuan);
    Tampilkan(totalPertemuan, persen);

    return 0;
}

