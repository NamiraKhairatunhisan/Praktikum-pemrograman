#include<iostream>
using namespace std;

int totalHadir = 0;

int Hadir(int n[], int stop){
	int jumlah = 0;
	for (int i =0; i<stop; i++){
		jumlah += n[i];
	}
	return jumlah;
}

double Rasio(double x){
	return x/totalHadir*100; 
}

void Tampilkan(int hadir, double persen){
	cout<< "total kehadiran kelas: " << hadir << " dari " << totalHadir <<endl;
	cout << "persentase kehadiran: " << persen << "%";
}

int main(){
	int pertemuan, hadir, persentase, jmlhM;
	cout<< "jumlah mahasiswa: ";
	cin >> jmlhM;
	int kehadiran[jmlhM];
	
	cout<< "total pertemuan: ";
	cin >> pertemuan;
	totalHadir = pertemuan*jmlhM;
	
	for (int i=0; i<jmlhM; i++){
		cout<< "kehadiran mahasiswa ke-" << i+1<<": ";
		cin >> kehadiran[i];
	}
	
	hadir = Hadir(kehadiran, jmlhM);
	persentase = Rasio(hadir);
	Tampilkan (hadir, persentase);

}
