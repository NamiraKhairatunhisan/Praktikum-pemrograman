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
			if (data[j] < data[j-1])
			swap(data[j-1], data[j]);
		}
	}
	
	for (int i=0; i<n; i++){
		if(i==n-1)
		cout << data[i]<< "";
		else
		cout << data[i]<< ", ";
	}
}

int main (){
	int n;
	
	cout<<"jumlah data: ";
	cin >> n;
	int data[n];
	
	cout<< "masukkan data: "<< endl;
	for(int i=0; i<n; i++){
		cin>> data[i];
	}
	
	int ganjil[1000], genap[1000], nGan, nGen; 
	nGen=0;
	nGan=0;
	bool adaGan = false;
	bool adaGen = false;
	
	for (int i=0; i<n; i++){
		if (data[i]%2==1){
			nGan++;
			ganjil[nGan-1] = data[i];
			adaGan = true;
		}
		if(data[i]%2==0){
			nGen++;
			genap[nGen-1] = data[i];
			adaGen = true;
		}
	}

	if (adaGan && adaGen){
		bubble_sort(ganjil, nGan);
		cout << ", ";
		bubble_sort(genap, nGen);
		
	}
	else{
		bubble_sort(ganjil, nGan);
		bubble_sort(genap, nGen);
	}
	return 0;
}

