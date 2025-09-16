#include<iostream>
#include<string>
using namespace std;

int main(){
	int angka;
	float desimal;
	char karakter;
	
	cout<< "masukkan sebuah angka: ";
	cin >> angka;
	cout<< "masukkan sebuah angka desimal: ";
	cin >> desimal;
	cout<< "masukkan sebuah karakter: ";
	cin>> karakter;
	
	cout << "Angka yang Anda masukkan: " << angka << endl;
 	cout << "Desimal yang Anda masukkan: " << desimal << endl;
 	cout << "Karakter yang Anda masukkan: " << karakter << endl;

	int bil1, bil2;
	cout<<"masukkan dua bilangan (pisahkan dengan spasi): ";
	cin>> bil1 >> bil2;
	
	cout<<"bilangan pertama: "<< bil1 <<endl;
	cout<<"bilangan kedua: "<< bil2 << endl;
	
 	return 0;
}

