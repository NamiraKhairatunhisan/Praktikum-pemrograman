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
		if(i==n-1)
		cout << data[i]<< " ";
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
	
	bubble_sort(data, n);
	
	return 0;
}
