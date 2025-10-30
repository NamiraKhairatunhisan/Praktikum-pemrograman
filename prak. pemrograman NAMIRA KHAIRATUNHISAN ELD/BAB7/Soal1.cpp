#include<iostream>
using namespace std;

double Fahrenheit(double x){
	return (x*9/5)+32.00;
}

double Kelvin(double x){
	return x+273.15;
}

int main(){
	int jumlahData;
	cout<< "jumlah data suhu: ";
	cin >> jumlahData;
	double dataSuhu[jumlahData];
	for(int i=0; i < jumlahData; i++){
		cout << "Mauskkan suhu ke-" << i +1<< ": ";
		cin >> dataSuhu[i];
	}
	cout<<endl;
	cout<< "fahrenheit: "<<endl;
	for(int i =0; i<jumlahData; i++){
		cout<< "suhu ke-"<<i+1<< ": ";
		cout << Fahrenheit(dataSuhu[i])<<endl;
	}
	cout<<endl;
	cout<< "Kelvin: "<<endl;
	for(int i =0; i<jumlahData; i++){
		cout<< "suhu ke-"<<i+1<< ": ";
		cout << Kelvin(dataSuhu[i])<<endl;
	}
}
