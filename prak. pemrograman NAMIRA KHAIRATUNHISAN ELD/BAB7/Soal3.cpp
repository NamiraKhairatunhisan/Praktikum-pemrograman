#include<iostream>
using namespace std;

int totalHadir = 0;

int TotalHadir(int n[], int stop){
	int jumlah = 0;
	for (int i =0; i<stop; i++){
		jumlah += n[i];
	}
	return jumlah;
}

double Rasio(double x, double y){
	return x/y*100; 
}

void Tampilkan(int hadir, int pert, double persen){
	cout<< "total kehadiran kelas: " << hadir << " dari " << pert <<endl;
	cout << "persentase kehadiran: " << persen << "%";
}

int main(){
	int jmlhM, pertemuan, totalKehadiran, hadir, persentase;
	cout<< "jumlah mahasiswa: ";
	cin >> jmlhM;
	int kehadiran[jmlhM];
	
	cout<< "total pertemuan: ";
	cin >> pertemuan;
	totalKehadiran = pertemuan*jmlhM;
	
	for (int i=0; i<jmlhM; i++){
		cout<< "kehadiran mahasiswa ke-" << i+1<<": ";
		cin >> kehadiran[i];
	}
	
	hadir = TotalHadir(kehadiran, jmlhM);
	persentase = Rasio(hadir, totalKehadiran);
	Tampilkan (hadir, totalKehadiran, persentase);

}
