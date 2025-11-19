#include<iostream>
using namespace std;

int urut[1000];

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
	float median;
	if (n%2==0){
		median = n/2;
		cout<< "median: " << data[median-1];
	}
	if (n%2!=0){
		median = data[(n+1)/2-1]+data[(n+1)/2];
		cout<< "median: " << data[median-1];
	}
	
	return 0;
}

