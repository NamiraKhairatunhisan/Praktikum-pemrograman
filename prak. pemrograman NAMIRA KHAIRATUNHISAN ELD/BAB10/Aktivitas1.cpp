#include<iostream>
#include<fstream>
using namespace std;

int cari_sekuensial(int data[], int s, int cari){
	bool ketemu;
	int i=0;
	
	ketemu = false;
	while((i<s) && !(ketemu)){
		ketemu = (data[i++] == cari);
	}
	
	if (ketemu){
		return i;
	}
	else{
		return -1*i;
	}
	
}

int main(){
	int data[1000];
	int n;
	
	ifstream file("data.txt");
	if (file) {
		int i=0;
		do{
			file >> data[i];
			i++;
		}while(file);
		n = i-1;
		
		file.close();
	}
	else {
		cout << "file gagal dibuka" << endl;
		return 1;
	}
	
	int cari;
	cout<<"bilangan yang ingin dicari: ";
	cin >> cari;
	
	int jumlahPencarian = cari_sekuensial(data, n, cari);
	if(jumlahPencarian > 0){
		cout<<"ditemukan"<<endl;
	}
	else cout<<"Tidak ditemukan " << endl;
	
	cout<<"jumlah pencarian yang dilakukan: " << jumlahPencarian << endl<<endl;
	
	cout<<"data adalah: ";
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
}
