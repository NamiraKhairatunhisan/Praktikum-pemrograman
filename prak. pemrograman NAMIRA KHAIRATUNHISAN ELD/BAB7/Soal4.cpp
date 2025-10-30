#include<iostream>
using namespace std;

double RataRata(double x[], double size){
	double jumlah =0;
	for (int i =0; i<size; i++){
		jumlah+= x[i];
	}
	
	return jumlah/size;
}

void Kriteria(double n){
	if(n >= 70.00)
		cout << "LULUS";
	else
		cout<< "GAGAL";
}

int main(){
	int jumlahNilai;
	cout<< "Masukkan jumlah nilai: ";
	cin >> jumlahNilai;
	
	double dataNilai[jumlahNilai], ratarata;
	for (int i=0; i< jumlahNilai; i++){
		cout<< "nilai mahasiswa ke-" << i+1<< ": ";
		cin>>dataNilai[i];
	}
	ratarata = RataRata(dataNilai, jumlahNilai);
	cout << "rata-rata nilai: " << ratarata<<endl;
	Kriteria(ratarata);
}

