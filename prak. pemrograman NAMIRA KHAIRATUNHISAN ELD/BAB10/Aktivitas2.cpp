#include<iostream>
#include<fstream>
using namespace std;

int cari_biner(int data[], int s, int cari){
	int a, b, t, langkah;
	bool ketemu;
	
	a=0; b= s-1;
	langkah =0;
	ketemu = false;
	
	do{
		t = (a + b)/2;
		if(data[t] == cari){
			ketemu = true;
		}
		else{
			if(data[t] > cari)
				b = t-1;
			else a = t+1;
		}
		langkah ++;
	}while ((a<=b) && !(ketemu));
	
	return ketemu ? langkah : -1 * langkah;
}

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubble_sort(int data[], int s) {
	for (int i = 0; i < s - 1; i++) {
		for (int j = s - 1; j > i; j--) {
			if (data[j] < data[j - 1]) {
				swap(data[j], data[j - 1]);
			}
		}
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
	
	cout<<endl<< "data adalah: ";
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
	cout<<endl<<endl;
	
	bubble_sort(data, n);
	
	int jumlahPencarian = cari_biner(data, n, cari);
	if(jumlahPencarian > 0){
		cout<<"ditemukan"<<endl;
	}
	else cout<<"Tidak ditemukan " << endl;
	
	cout<<"jumlah pencarian yang dilakukan: " << jumlahPencarian<<endl;
	
	cout<<"data terurut adalah: ";
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
}
