#include<iostream>
using namespace std;

int main(){
	int bil1, bil2;
	cout<<"masukkan dua bilangan (pisahkan dengan spasi): ";
	cin>> bil1 >> bil2;
	
	cout<<"bilangan pertama: "<< bil1 <<endl;
	cout<<"bilangan kedua: "<< bil2;
	
	string kalimat;
	cin.ignore();
	cout << "masukkan sebuah kalimat: ";
	getline(cin, kalimat);
	cout<< "kalimat yang anda masukkan: " << kalimat<<endl;
	
	return 0;
}
