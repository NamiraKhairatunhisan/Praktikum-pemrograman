#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

struct Mahasiswa {
	string nama;
	int umur;
	string nik;
};

int main (){
	const int jumlahMahasiswa = 100;
	Mahasiswa mhs[jumlahMahasiswa];
	int count =0;
	
	ifstream inputFile("mahasiswa.txt");
	if(!inputFile){
		cout<<"file gagal dibaca" << endl;
		return 1;
	}
	
	string line;
	
	while (getline(inputFile, line) && count < jumlahMahasiswa){
		stringstream ss(line);
		ss >> mhs[count].nama >> mhs[count].umur >> mhs[count].nik;
		count++;
	}
	inputFile.close();
	
	cout << "Data Mahasiswa"<<endl;
	for(int i =0; i < count; i++){
		cout<< "Mahasiswa " << i+1 << endl;
		cout << "Nama: " << mhs[i].nama<<endl;
		cout<<"Umur: " << mhs[i].umur <<endl;
		cout<<"NIK: " << mhs[i].nik<<endl<<endl;
	}
	return 0;
}
