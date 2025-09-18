/*Membaca username (tanpa spasi) dan pin (0–9999).
2 Jika username == "ugo" maka:
Jika pin di rentang 0000–9999, cetak "Akses diterima".
Selain itu, cetak "PIN invalid".
3 Jika username bukan "ugo", cetak "User tidak dikenal".

Ekstra: Refactor agar mengurangi kedalaman if.*/

#include <iostream>
#include<string>
using namespace std;

int main (){
	
	string username;
	int password;
	
	cout << "username: ";
	cin >> username;
	cout << "password: ";
	cin>> password;
	
	if (password >= 0000 && password <= 9999){
		if (username == "ugo")
		cout<< "akses diterima";
		else
		cout<< "user tidak dikenal";
	}
	else
	cout<<"pin invalid";
	
}
