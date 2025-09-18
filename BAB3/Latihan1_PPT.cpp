/*Membaca sebuah bilangan bulat.
2 Menampilkan apakah positif/negatif/nol (gunakan if).
3 Jika bukan nol, tampilkan apakah genap atau ganjil.*/

#include <iostream>
using namespace std;

int main (){
	int n;
	cout<< "masukkan nilai n: ";
	cin>>n;
	
	if (n==0){
		cout<<"bilangan adalah nol dan genap";
	}
	else{
		if (n>0 && n%2 == 0)
		cout<<"bilangan positif dan genap";
		else if (n>0 && n%2 != 0)
		cout<<"bilangan positif dan ganjil";
		else if (n<0 && n%2 == 0)
		cout<<"bilangan negatif dan genap";
		else
		cout<<"bilangan negatif dan ganjil";
		
	}
	
}
