#include<iostream>
using namespace std;

void swap(int &a, int &b) {
int temp;
temp = a;
a = b;
b = temp;
}

void bubble_sort(int data[], int n){
	for (int i =0; i<n-1; i++){
		for (int j=n-1; j>i; j--){
			if (data[j] > data[j-1])
			swap(data[j-1], data[j]);
		}
	}
	
	for (int i=0; i<n; i++){
		cout << data[i]<< " ";
	}
}

int main (){
	int n, awal, akhir;
	
	cout<<"jumlah data, indexawal, index akhir: ";
	cin >> n >> awal >> akhir;
	int data[n];
	
	cout<< "masukkan data: "<< endl;
	for(int i=0; i<n; i++){
		cin>> data[i];
	}
	
	int j=0;
	int dari[1000];
		for(int i=awal; i<akhir; i++){
			dari[j]==data[i];
			j++;
		}
	
	for(int i=0; i<awal; i++){
		cout<< data[i]<< " ";
	}
	
	int jumlah = akhir-awal+1;
	
	bubble_sort(dari, jumlah);
	
	for(int i=akhir; i<n; i++){
		cout<< data[i]<< " ";
	}
	
	return 0;
}
