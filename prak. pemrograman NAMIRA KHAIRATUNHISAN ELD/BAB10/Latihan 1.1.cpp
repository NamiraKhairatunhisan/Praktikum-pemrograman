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
	
	cout<<"data adalah: ";
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
	cout<<endl<<endl;
	
	bubble_sort(data, n);
	
	int min, max;
	min = data[0];
	max = data[n-1];
	
	cout<< "data terkecil adalah: " << min << endl;
	cout<< "jumlah langkah: " << cari_sekuensial(data, n, min) << endl;
	cout<< "data terbesar adalah: " << max << endl;
	cout<< "jumlah langkah: " << cari_sekuensial(data, n, max)<<endl<<endl;
	
	cout<<"data terurut adalah: ";
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
}
