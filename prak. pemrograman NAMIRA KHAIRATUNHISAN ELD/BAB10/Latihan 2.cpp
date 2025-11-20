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
	cout<< "jumlah langkah: " << cari_biner(data, n, min) << endl;
	cout<< "data terbesar adalah: " << max << endl;
	cout<< "jumlah langkah: " << cari_biner(data, n, max)<<endl<<endl;
	
	cout<<"data terurut adalah: ";
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
}
