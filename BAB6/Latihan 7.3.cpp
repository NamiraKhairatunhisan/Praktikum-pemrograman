#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

struct Karyawan {
	string nama;
	int umur;
	string nik;
	string jabatan;
};

const int jumlahKaryawan = 100;
	Karyawan krywn[jumlahKaryawan];
	int count =0;
	int opsi;
	string cariNik;

void TampilData(){
	cout << "Data Karyawan"<<endl;
	for(int i =0; i < count; i++){
	cout<< "Karyawan " << i+1 << endl;
	cout << "Nama: " << krywn[i].nama<<endl;
	cout<<"Umur: " << krywn[i].umur <<endl;
	cout<<"NIK: " << krywn[i].nik<<endl;
	cout<<"Jabatan: " << krywn[i].jabatan<<endl<<endl;
	}
};
void TambahData(){
	cout<< "masukkan data baru" <<endl;
				cout << "Nama: ";
				cin >> krywn[count].nama;
				cout<<"Umur: ";
				cin >> krywn[count].umur;
				cout<<"NIK: ";
				cin >> krywn[count].nik;
				cout<<"Jabatan: ";
				cin >> krywn[count].jabatan;
				cout <<endl;
				
				count++;
};

void EditData(){
	for(int i=0; i<count; i++){
				if (cariNik == krywn[i].nik){
					cout<< "masukkan data baru" <<endl;
					cout << "Nama: ";
					cin >> krywn[i].nama;
					cout<<"Umur: ";
					cin >> krywn[i].umur;
					cout<<"NIK: ";
					cin >> krywn[i].nik;
					cout<<"Jabatan: ";
					cin >> krywn[i].jabatan;
					cout <<endl;
				}
			}
};
void HapusData(){

for(int i=0; i<count; i++){
				if (cariNik == krywn[i].nik){
					for (int j=i; j<count-1; j++){
						krywn[j] = krywn [j+1];
					}
					cout<< "Data telah dihapus! " << endl;
					
					count --;
				}
			}
};

int main (){
	ifstream inputFile("karyawan.txt");
	if(!inputFile){
		cout<<"file gagal dibaca" << endl;
		return 1;
	}
	
	string line;
	
	while (getline(inputFile, line) && count < jumlahKaryawan){
		stringstream ss(line);
		ss >> krywn[count].nama >> krywn[count].umur >> krywn[count].nik >> krywn[count].jabatan;
		count++;
	}
	inputFile.close();
	
	while(true){
		cout<< "----------------------" << endl;
		cout<< "Pilih opsi (dalam angka)"<<endl;
		cout<< "1) Tampilkan semua data" <<endl;
		cout<< "2) Tambahkan data" << endl;
		cout << "3) Edit data" <<endl;
		cout << "4) Hapus data" <<endl << endl;
		cin >> opsi;
		
		switch (opsi){
			case 1:
			TampilData();
			break;
			
			case 2:
			if (count+1 < jumlahKaryawan){
				TambahData();
			}
			else{
				cout << "data penuh";
			}
			break;
			
			case 3:
			cout<< "masukkan NIK yang ingin diedit: ";
			cin >> cariNik;
			
			EditData();
			
			break;
			
			case 4:
			cout<< "masukkan NIK yang ingin dihapus: ";
			cin >> cariNik;
			
			HapusData();
			break;
			
			default:
				cout<< "invalid"<<endl;
				break;
		}
		
	}
	
}
